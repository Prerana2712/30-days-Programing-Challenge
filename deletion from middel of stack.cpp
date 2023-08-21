#include <iostream>
#include <stack>
using namespace std;

void delMidElement(stack<int> &s, int middle, int current = 0) {
    if (s.empty() || current == middle) {
        s.pop();
        return;
    }

    int temp = s.top();
    s.pop();
    delMidElement(s, middle, current + 1);
    s.push(temp);
}

int main() {
    std::stack<int> stack;
	
	int n;
	cout<<"Enter the number of elements in stack : ";
	cin>>n;
	
	cout<<"Enter the elements : ";
	for(int i=0;i<n;i++){
		int input;
		cin>>input;
		stack.push(input);
	}
    
   

    int middle = stack.size() / 2;
    
    delMidElement(stack, middle);

    std::cout << "Stack after deleting middle element: ";
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }

    return 0;
}

