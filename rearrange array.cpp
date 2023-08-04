#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the number of elements of array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elments of array : ";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	

	int brr[n];
	int c=0;
	int k=0;
	for(int i=0;i<n;i++){
		
		if(arr[i]<0){
			c++;
			brr[k]=arr[i];
			k++;
		}
		
	}
		
	for(int j=0;j<n;j++){
		if(arr[j]>=0){
				
			brr[c]=arr[j];
			c++;
		}
	}
			
	cout<<"\n";
	
	for(int i=0;i<n;i++)
	{
		cout<<brr[i]<<"\t";
	}
	return 0;
	
}
