#include <iostream>
using namespace std;



struct Node {
	Node *next;
	int data;
};



class linkedList {
private:
	Node *head = NULL;
	Node *tail = NULL;
	Node *cur = NULL;
	Node *cur4Del = NULL;
	int size;
public:
	linkedList() {size = 0;}
	~linkedList() {}
	bool isEmpty();
	void addNode(int data);
	void addHead(int data);
	void addTail(int data);
	void deleteHead();
	void deleteTail();
	bool searchData(int data);
	void deleteData(int data);//서치된 노드 삭제
	void show();
};
bool linkedList::isEmpty(){
	if(0==size) return true;
	else return false;
}
void linkedList::addNode(int data) {
	//중복삭제용
}
void linkedList::addHead(int data) {
	Node *newNode = new Node();
	if(isEmpty()) {
		newNode->data = data;
		newNode->next = NULL;
		head = newNode;
		tail = newNode;
	}//중복
	else{
		newNode->data = data;
		newNode->next = head;
		head = newNode;
	}
	++size;
}
void linkedList::addTail(int data) {
	Node *newNode = new Node();
	if(isEmpty()) {
		newNode->data = data;
		newNode->next = NULL;
		head = newNode;
		tail = newNode;
	}//중복
	else{
		newNode->data = data;
		tail->next = newNode;
		newNode->next = NULL;
		tail = newNode;
	}
	++size;
}

void linkedList::deleteHead() {
	if(0==size){
		cout<<"no Node";
	}
	else{
		Node *tmp = new Node();
		tmp = head;
		head = head->next;
		delete tmp;
		--size;
	}
}
void linkedList::deleteTail() {
	if(0==size){
		cout<<"no Node";
	}
	else{
		Node *tmp = new Node();
		tmp = head;
		for(int i=0;i<size-1;i++){
			tmp = tmp->next;
		}
		tail = tmp;
		tmp = tail->next;
		tail->next = NULL;
		delete tmp;
		--size;
	}	
}
bool linkedList::searchData(int data) {
	cur = head;
	do{
		if(data == cur->data) return true;
		else{
			cur4Del = cur;
			cur = cur->next;
		}

} while(NULL != cur->next);
	if(data == cur->data)return true;
	else return false;
}

void linkedList::deleteData(int data){
	if(searchData(data)){
		if(cur == head) deleteHead();
		else if(cur == tail) deleteTail();
		else{
			Node *tmp = new Node();
			tmp = cur4Del;
			tmp->next = cur->next;
			tmp = cur;
			delete tmp;
			--size;
		}
		cout<<"Cur deleted"<<endl;
	}
	else cout<<"Data Not Found"<<endl;
}
void linkedList::show() {
	cur = head;
	for(int i=0; i<size; i++){
		cout<<cur->data<<" ";
		cur = cur->next;
	}
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

	list.deleteData(4);
	list.show();


	cout<<"end"<<endl;
	for(;;){}

	return 0;
}
