#include <iostream>
using namespace std;

int main(){
	
	int a,b;
	cout<<"Enter the numbers : ";
	cin>>a>>b;
	
	int gcd;
	if(a<b){
		gcd=a;
	}
	else{
		gcd=b;
	}
	
	
	do{
		if((a%gcd==0) && (b%gcd==0)){
			break;
		}
		gcd--;
	}while(gcd>=1);
	
	cout<<gcd;
	return 0;
}
