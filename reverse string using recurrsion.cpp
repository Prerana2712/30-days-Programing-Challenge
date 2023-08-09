#include <iostream>
using namespace std;


void reverse(string s,int start,int n){
	

	int l=n-1;
	if(l<start){
		return ;
	}
	char letter=s[l];
	cout<<letter;
	reverse(s,start,l);
	
}
int main(){
	
	string s;
	cout<<"Enter the String : ";
	cin>>s;
	
	int n=s.length();
	reverse(s,0,n);
	return 0;
}
