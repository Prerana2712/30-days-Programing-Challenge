#include <iostream>
using namespace std;
int main()
{
	
	int n;
	cout<<"Enter the number of elements in array :";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int x;
	int count=0;
	cout<<"Enter the element x : ";
	cin>>x;
	
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			count++;
		}
	}
	
	cout<<"\nOccurances of "<<x<<" is : ";
	
	cout<<count;
	return 0;
	
}
