#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Tree{
	public:
		int data;
		Tree *left,*right;
	
	Tree(int value){
		data=value;
		left=NULL;
		right=NULL;
	}
};

int arr[10],c;
void inorder(Tree *root){
	
	if(root==NULL){
		return;
	}
	else{
			
			
			inorder(root->left);
			arr[c]= root->data;
			c++;
			inorder(root->right);
			
	}

}
int main() {
    Tree *root=new Tree(5);
	root->left=new Tree(3);
	root->right=new Tree(7);
	root->left->right=new Tree(4);
	root->left->left=new Tree(2);
	root->right->left=new Tree(6);
	root->right->right=new Tree(8);
	
	
    
    inorder(root);
   	
    for (int i=0;i<c;i++) {
        cout << arr[i] << " ";
    }
    
    for(int i=0;i<c;i++){
    	for(int j=0;j<c-i-1;j++){
    		if(arr[j]<arr[j+1]){
    			int temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
	

    int k;
    cout<<"\nEnter the value of k :";
    cin>>k;
    
    cout<<arr[k-1];
    return 0;
}
