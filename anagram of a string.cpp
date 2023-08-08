#include <iostream>
using namespace std;

int main(){
	
	string s;
	cout<<"Enter the string 1 : ";
	cin>>s;
	
	string c;
	cout<<"Enter the string 2 : ";
	cin>>c;
	
	int flag=0;
	int count=0;
	
	for(int i=0;i<s.length();i++){
		for(int j=0;j<c.length();j++){
			if(s[i]==c[j]){
				count++;
			}
		}
	}
	
	if(count == s.length()){
		flag=1;
	}
	
	if(flag == 1){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	return 0;
}
