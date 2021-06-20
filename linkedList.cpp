#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



struct Node {
	struct Node *next;
	int data;
};



class linkedList {
private:
	struct Node *head = NULL;
	struct Node *tail = NULL;
	//struct Node *cur = NULL;
	int size = 0;
public:
	linkedList() {}
	~linkedList() {}
	void addNode(int data);
	void addHead(int data);
	void addTail(int data);
	void deleteHead();
	void deleteTail();
	void deleteNode(int data);//특정숫자 삭제? 
	void show();
	bool searchData(int data);
};

void linkedList::addNode(int data) {
	//중복삭제용
}
void linkedList::addHead(int data) {
	struct Node *newNode = new Node();
	if(0 == this->size) {
		this->head = newNode;
		this->tail = newNode;
		newNode->data = data;
	}//중복
	else{
		newNode->data = data;
		newNode->next = head;
		this->head = newNode;
	}
	++size;
}
void linkedList::addTail(int data) {
	struct Node *newNode = new Node();
	if(0 == this->size) {
		this->head = newNode;
		this->tail = newNode;
		newNode->data = data;
	}//중복
	else{
		newNode->data = data;
		newNode->next = NULL;
		this->tail = newNode;
	}
	++size;
}
void linkedList::deleteHead() {
	if(0==this->size){
		cout<<"no Node";
	}
	else{
		struct Node *tmp = new Node();
		tmp = head;
		this->head = this->head->next;
		delete tmp;
		--size;
	}
}
void linkedList::deleteTail() {
	if(0==this->size){
		cout<<"no Node";
	}
	else{
		struct Node *tmp = new Node();
		tmp = tail;
		this->tail = 
		--size;	
	}	
}
void linkedList::show() {

}
bool linkedList::searchData(int data) {
	return true;
}




int main(){

	linkedList list;
	list.addHead(3);
	list.addHead(2);
	list.addHead(1);
	list.addTail(4);
	list.addTail(4);
	list.addTail(5);
	list.addTail(6);

	for(;;){}
}
