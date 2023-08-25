#include <iostream>
using namespace std;

int main(){
	
	
	int n;
	cout<<"Enter the number of elements of array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int k;
	cout<<"Enter the k : ";
	cin>>k;
	for (int i = 0; i <= n - k; i++) {
        bool flag = false;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                cout<<arr[j]<<"\t";
                flag = true;
                break;
            }
        }
        
      
        if (!flag)
            cout<<"0 ";
    }
    
	return 0;
}
