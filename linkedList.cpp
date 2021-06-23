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
	struct Node *cur = NULL;
	int size;
public:
	linkedList() {size = 0;}
	~linkedList() {}
	void addNode(int data);
	void addHead(int data);
	void addTail(int data);
	bool searchData(int data);
	void deleteHead();
	void deleteTail();
	void deleteCur();//서치된 노드 삭제
	void show();
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
bool linkedList::searchData(int data) {
	this->cur = this->head;
	do{
		if(data == cur->data) return true;
		else continue;
} while(NULL != cur->next);
	return false;
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
	//	this->tail = 
		--size;	
	}	
}
void linkedList::deleteCur(){
	
}
void linkedList::show() {
	this->cur = this->head;
	do {
		cout<<cur->data<<" ";
		cur= cur->next;
	}while(NULL != cur->next);
	cout<<endl;
}



int main(){

	linkedList list;
	list.addHead(3);
	list.addHead(2);
	list.addHead(1);
	list.show();

	list.addTail(4);
	list.addTail(5);
	list.addTail(6);
	list.show();

	list.deleteHead();
	list.deleteTail();
	list.show();

	list.searchData(4);
	list.deleteCur();
	list.show();
	for(;;){}

	return 0;
}
