#include<iostream>
using namespace std;

class Stack {
private:
    int top, MaxSize;
    char *stack;
public:
    Stack(int size);
    bool isFull();
    bool isEmpty();
    char pop();
    void push(char element);
    void print();
};
Stack::Stack(int size){
	MaxSize = size;
	top = 0;
	stack = new char(size);
}
bool Stack::isFull() {
	if(MaxSize == top) return true;
	else return false;
}
bool Stack::isEmpty() {
	if (0 == top) return true;
	else return false;
}
char Stack::pop() {
	if(isEmpty()) cout<<"Stack is empty"<<endl;//리턴 안해도 됨
	else return stack[top--];
}
void Stack::push(char element) {
	if(isFull()) cout<<"Stack is full"<<endl;
	else stack[top++] = element;
}
void Stack::print(){
	if(isEmpty()) cout<<"Stack is empty"<<endl;
	else cout<<stack[top-1]<<endl;
}


int main(){
	Stack stack(5);
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.push('d');
    stack.push('e');
    stack.push('f');
    
    stack.pop();
    stack.push('f');
    stack.print();
    
    
	for(;;);
}
