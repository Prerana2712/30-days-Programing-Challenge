#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"Enter the number of elements of an array:";
    cin >>n ;
    
    int arr[n];
    cout << "Enter the elements of array : " << std::endl;
    for (int i=0;i<n;i++) {
        cin>>arr[i];
       
    }
    
    int min=arr[0] ;
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Smallest : "<<min<<" , "<<"Largest : "<<max;
    
    return 0;
}
