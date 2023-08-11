#include <iostream>
using namespace std;

int main(){
	
	
	string s="I love program";
	
	int c;
	int n=s.length();
	string a="";
	string temp="";

	
	for(int j=0;j<n;j++){
		
		char ch=s[j];
		
		if(ch==' '){
			if(temp!=""){
				a=temp+" "+a;
				
			}
			temp=" ";
		}
		else
		{
			temp+=ch;
		}
	}
	
	if(temp!=""){
		a=temp+" "+a;
	}
	
	cout<<a;
	return 0;
}
