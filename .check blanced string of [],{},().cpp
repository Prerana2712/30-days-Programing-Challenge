#include <iostream>
using namespace std;

int main(){
	
	string s;
	cout<<"Enter the String : ";
	cin>>s;
	
	int flag=1;
	int c =0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='['||s[i]=='('||s[i]=='{'){
			c++;
		}
		else if(s[i]==']'||s[i]==')'||s[i]=='}'){
			c--;
		}
			
		if(c<0){
			flag=0;
			break;
		}
		
	}
	if(c==0){
		flag=1;
	}
	else{
		flag=0;
	}
		
	if(flag==1){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
