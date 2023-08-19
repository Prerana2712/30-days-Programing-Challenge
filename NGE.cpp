#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the  number of elements of array :";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elments of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				cout<<arr[i]<<"-->"<<arr[j]<<"\n";
				break;
			}
			else if(arr[i]>arr[j] && j==n-1){
				cout<<arr[i]<<"-->-1"<<"\n";
			
			}		
		}
		if(i==n-1){
			cout<<arr[i]<<"-->-1";
		}
	}
	
	return 0;
}
