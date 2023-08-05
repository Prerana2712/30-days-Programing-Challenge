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
	
	int k;
	cout<<"\nEnter the value of k : ";
	cin>>k;
	int count =0;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j]==k)
			{
				count++;
			}
		}
	}
	cout<<"\nNumber of pairs whose sum is equal to "<<k<<" is : "<<count;
	return 0;
}
