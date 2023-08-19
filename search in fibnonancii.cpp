#include <iostream>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n = 1000;
    int k;
    cout<<"Enter the key : ";
    cin>>k;
    
    int flag=0;
    for(int i=0;i<n;i++){
    	
  
    	if(k==fib(i)){
    		flag=1;
    		break;
		}
		else{
			flag=0;
		
		}
		
	}
    
    if(flag==0){
    	
    	cout<<"false";
	}
	else{
		cout<<"true";
	}
    return 0;
}
 
