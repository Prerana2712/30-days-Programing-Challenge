#include <iostream>
using namespace std;

int main(){
	
	string s;
	cout<<"Enter the string : ";
	cin>>s;
	int flag=0;
	int c =0;
	
	int index;
	cout<<"Enter the index : ";
	cin>>index;
	for(int i=index-1;i<s.length();i++){
		if(s[i]=='['||s[i]=='('||s[i]=='{'){
			
			c++;
			if(c==1){
				cout<<"\nStart Index : "<<i;
			}
		}
		else if(s[i]==']'||s[i]==')'||s[i]=='}'){
			c++;
			if(c%2==0){
				cout<<"\nOutput : "<<i;
				break;
			}
		}
			
	
	}

	return 0;
}
