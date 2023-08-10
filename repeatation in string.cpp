#include <iostream>
using namespace std;
int main(){
	
	string s;
	cout<<"Enter the string : ";
	cin>>s;
	
	int n=s.length();

	for(int i=0;i<n;i++){
		bool distinct=true;
		for(int j=0;j<n;j++){
			if(i!=j && s[i]==s[j] ){
					distinct=false;
					break;
			}
			
		}
		if(distinct){
			cout<<s[i];
			break;
		}
	}
	
	return 0;
}
