#include <iostream>
using namespace std;
int main(){
	
	string s1;
	cout<<"Enter the string 1 : ";
	cin>>s1;
	
	string s2;
	cout<<"Enter the string 2 : ";
	cin>>s2;
	
	int c1,c2=0;
	
	for(int i=0;i<s1.length();i++){
		for(int j=i+1;j<s1.length();j++){
		
			if(s1[i]!=s1[j]){
				c1++;
			}
		}
	}
	
	for(int i=0;i<s2.length();i++){
		for(int j=i+1;j<s2.length();j++){
		
			if(s2[i]!=s2[j]){
				c2++;
			}
		}
	}
	
	//cout<<c1<<"\t"<<c2;
	
	if(c1==c2){
		cout<<"True";
	
	}
	else{
		cout<<"False";
	}
	
	return 0;
}

