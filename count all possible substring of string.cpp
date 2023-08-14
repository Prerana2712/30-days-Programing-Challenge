#include <iostream>
using namespace std;

int main(){
	
	
	string s;
	cout<<"Enter the String : ";
	cin>>s;
	
	int k;
	cout<<"Enter the value of k : ";
	cin>>k;
	
	int count=0;

	cout<<"Possible substrings are : \n";
	for(int i=0;i<s.length()-1;i++){
		if(s[i]!=s[i+1]){
			count++;
			cout<<s[i]<<s[i+1]<<"\t";
		}
		cout<<"\n";
	}
	
	
	cout<<"\nCount : "<<count;
	return 0;
}
