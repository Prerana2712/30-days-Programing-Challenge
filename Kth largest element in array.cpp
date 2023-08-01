#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the number of elements in array : ";
	cin>>n;
	
	int arr[n];
	cout<<"\nEnter the elements of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]<arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		}
	}
	
	/*
	cout<<"\nSorted Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	*/
	int k;
	cout<<"\nEnter the value of K : \n";
	cin>>k;
	
	cout<<k<<"th largest value in given array is "<<arr[k-1];
	return 0;
}
