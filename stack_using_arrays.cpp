/* CPP implementation of a stack using arrays */

#include <iostream>
using namespace std;

#define SIZE 5

class stack{
    int stck[SIZE];
    int tos;
public:
	stack(); // Constructor
	~stack(); // Destructor
    void push(int item);
    int pop();
};

stack :: stack(){
    tos = 0;
	cout << "Stack Initialized" << endl;
}

stack :: ~stack(){
	cout << "Stack Destroyed" << endl;
}

void stack :: push(int item){
    if(tos == SIZE){
        cout << "Stack is full!\n";
        return;
    }
    stck[++tos] = item;
    cout << item << " has been pushed onto the stack." << endl;
}

int stack :: pop(){
    if(tos == 0){
        cout << "Stack is empty!" << endl;
        return -1;
    }
    int item = stck[tos--];
    return item;
}

int main()
{
    stack stack1, stack2;
    
    stack1.push(3);
    stack1.push(2);
    stack1.push(1);
    
    stack2.push(5);
    stack2.push(6);
    stack2.push(7);
    
    cout << "Popped: " << stack1.pop() << endl;
    
    cout << "Popped: " << stack2.pop() << endl;
    cout << "Popped: " << stack2.pop() << endl;

    return 0;
}