#include <iostream>
using namespace std;

class node{
public:
	node *prev;
	int info;
	node *next;
};

class DoublyLinkedList{
	node *head;
	node *tail;
public:
	DoublyLinkedList(){
		head=tail=NULL;
	}
	~DoublyLinkedList(){};

	int isEmpty();
	void addBeg(int);
	void addEnd(int);
	void delBeg();
	void delEnd();
	void traverse();
	void reverseTraverse();
};

int DoublyLinkedList::isEmpty(){
	(head==NULL && tail==NULL)? 1 : 0; 
}

void DoublyLinkedList::addBeg(int item){
	node *ptr;
	ptr=new node;
	ptr->info=item;
	ptr->prev=NULL;
	if(head==NULL){
		ptr->next=NULL;
		head=ptr;
		tail=ptr;
		return;	
	}
	ptr->next=head;
	head->prev=ptr;
	head=ptr;
}

void DoublyLinkedList::addEnd(int item){
	node *ptr;
	ptr=new node;
	ptr->info=item;
	if(head==NULL){
		ptr->next=NULL;
		head=ptr;
		tail=ptr;
		return;
	}
	ptr->next=NULL;
	ptr->prev=tail;
	tail->next=ptr;
	tail=ptr;
}

void DoublyLinkedList::delBeg(){
	if(isEmpty()==1)
		return;
	node *ptr;
	ptr=head;
	head=head->next;
	head->prev=NULL;
	delete ptr;
}

void DoublyLinkedList::delEnd(){
	if(isEmpty()==1)
		return;
	node *ptr;
	ptr=tail;
	tail=tail->prev;
	tail->next=NULL;
	delete ptr;
}

void DoublyLinkedList::traverse(){
	node *ptr;
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->info<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
}

void DoublyLinkedList::reverseTraverse(){
	node *ptr;
	ptr=tail;
	while(ptr!=NULL){
		cout<<ptr->info<<" ";
		ptr=ptr->prev;
	}
	cout<<"\n";
}

int main(int argc, char const *argv[])
{
	DoublyLinkedList list;
	//cout<<list.isEmpty()<<"\n";
	list.addBeg(4);
	list.addBeg(3);
	list.addBeg(2);
	list.addBeg(1);
	list.addEnd(5);
	list.addEnd(6);
	list.addEnd(7);
	list.delBeg();
	list.delBeg();
	list.delEnd();
	list.traverse();  //call for traversing the list
	list.reverseTraverse();   //call for reverse traversel
	return 0;
}