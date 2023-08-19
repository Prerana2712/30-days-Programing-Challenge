#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	
	int n,m;
	cout<<"Enter the values of n and m :";
	cin>>n>>m;

	for(int i=1;i<=10;i++){
    	if(m%i==0){
            if(pow(i,n)==m){
                cout<< i;
            }
        }
    }
    
	return 0;    
}
