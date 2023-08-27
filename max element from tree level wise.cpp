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

vector<int> find(Tree* root) {
    vector<int> res;
    if (!root) {
        return res;
    }
    
    queue<Tree*> q;
    q.push(root);
    
    while (!q.empty()) {
        int level = q.size();
        int maxV = INT_MIN;
        
        for (int i = 0; i < level; ++i) {
            Tree* node = q.front();
            q.pop();
            
            maxV = max(maxV, node->data);
            
            if (node->left) {
                q.push(node->left);
            }
            
            if (node->right) {
                q.push(node->right);
            }
        }
        
        res.push_back(maxV);
    }
    
    return res;
}

int main() {
    Tree *root=new Tree(5);
	root->left=new Tree(3);
	root->right=new Tree(7);
	root->left->right=new Tree(4);
	root->left->left=new Tree(2);
	root->right->left=new Tree(6);
	root->right->right=new Tree(8);
	
	
    
    vector<int> largest = find(root);
    
   
    for (int i=0;i<largest.size();i++) {
        cout << largest[i] << " ";
    }
    
   
    return 0;
}
