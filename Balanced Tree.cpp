#include <iostream>
#include <math.h>
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

int Balanced(Tree* root){
	if (root == NULL)
	{
		return 0;
	}
        
    int left = Balanced(root->left);
    if (left == -1)
    {
    	return -1;
	}
        
    int right = Balanced(root->right);
    if (right == -1)
    {
    	return -1;
	}
        
 
    if (abs(left - right) > 1)
	{
    	return -1;
	}   
    else
    {
    	return max(left, right) + 1;
	}
}
int main(){
	
	
	Tree *root=new Tree(5);
	root->left=new Tree(3);
	root->right=new Tree(7);
	root->left->right=new Tree(4);
	root->left->left=new Tree(2);
	root->right->left=new Tree(6);
	root->right->right=new Tree(8);
	
	
	if(Balanced(root)>0){
		cout<<"Balanced";
		
	}
	else{
		cout<<"Unbalanced";
	}
	return 0;
}
