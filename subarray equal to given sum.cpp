#include <iostream>
using namespace std;

int main(){
	
	int n;
	cout<<"Enter the number of elements of an array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements of array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int target;
	cout<<"Enter the sum : ";
	cin>>target;
	
	int flag=0;
	for(int i=0;i<n;i++){
		
		int sum=arr[i];
	
		if(sum==target){
			cout<<arr[i];
		}
		else {
			int j;
			if(sum<target){
				for(j=i+1;j<n;j++){
					sum+=arr[j];
				
					if(sum==target){
						
	                    cout<<"[\t";
	                    for(int k=i;k<=j;k++){
	                        cout<<arr[k]<<"\t";
						}
						cout<<"]";
						break;					
					}							      
				}			
			}
			else{
			
				cout<<"No sub array exist";		
			}								
		}		
	}	
	return 0;
	
}
