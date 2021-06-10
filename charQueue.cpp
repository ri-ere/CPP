#include<iostream>
using namespace std;

class Queue {
private:
	int front, back, maxSize;
	char *queue;
public:
	Queue(int size);
	bool isEmpty();
	bool isFull();
	void push(char element);
	char pop();
	char front();
	char back();
}

Queue::Queue(int size){
	maxSize = size;
	front = 0;
	back = -1;
	queue = new int(maxSize);
}

bool Queue::isEmpty(){
	if(-1==(back-front)) return true;
	else return false;
}
bool Queue::isFull(){
	if((back-front)==maxSize-1) return true;
	else return false;
}
void Queue::push(char element){
	if(isFull()) cout<<"Queue is full"<<endl;
	else queue[back++] = element;//큐접근을 이렇게 하면 안됨 수정해야함
}
char Queue::pop(){
	if(isEmpty()) cout<<"Queue is empty"<<endl;
	else return queue[front++];
}

int main(){
	Queue queue(5);
    queue.push('a');
    queue.push('b');
    queue.push('c');
    queue.push('d');
    queue.push('e');
    queue.push('f');
    
    cout<<queue.back()<<endl;
    cout<<queue.front()<<endl;
    cout<<queue.pop()<<endl;
    cout<<queue.front()<<endl;
    queue.push('f');
    cout<<queue.back()<<endl;
    
	for(;;);
}
