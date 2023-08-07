#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of an array : " ;
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of an array : " ;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    int k;
    cout << "Enter the value of k : " ;
    cin >> k;
    
    cout<<"\nOrginal Array : ";
    cout<<"[	";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<"\t";
    }
    cout<<" ]";

    
    int brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        arr[i]=brr[(i+k)%n];
    }
    
    cout<<"\n\nRotated Array : ";
    cout<<"[	";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] <<"\t";
    }
    cout<<" ]";


    return 0;
}
