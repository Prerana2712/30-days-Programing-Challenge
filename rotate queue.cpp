#include<iostream>
#include <queue>
#include <stack> 
using namespace std;

void reversqueue(queue<int> &queue, int k) {
    if (k < 0 || k >= queue.size() || queue.empty()) {
        cout<<"Invalid ";
        return;
    }    
    int n = queue.size();
    
    stack<int> stack;
    for (int i = 0; i < k; i++) {
        int curr = queue.front();
        queue.pop();
        stack.push(curr);
    }
     
    for (int i = 0; i < k; i++) {
        int curr = stack.top();
        stack.pop();
        queue.push(curr);
    }
 
    for (int i = 0; i < n - k; i++) {
        int curr = queue.front();
        queue.pop();
        queue.push(curr);
    }    
  
    for (int i = 0; i < n; i++) {
        int curr = queue.front();
        queue.pop();
        cout<<curr<<" ";
        queue.push(curr);
    }
   
}
int main() {
   
    queue<int> q;
    int n;
    cout<<"Enter the number of elements of n : ";
    cin>>n;
    
    int ele;
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++){
    	cin>>ele;
    	q.push(ele);
	}
	
    int k;
    cout<<"Enter the value of k :";
    cin>>k;
   
    reversqueue(q, k);
   
}
