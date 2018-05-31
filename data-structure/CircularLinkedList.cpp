#include <iostream>
using namespace std;

class node{
public:
	int info;
	node *next;
};

class CircularLinkedList{
	node *head;
public:
	CircularLinkedList(){
		head=NULL;
	}
	void insertNode(int);
	void traverse();
};

void CircularLinkedList::insertNode(int item){
	node *ptr;
	ptr=new node;
	node *loc=head;
	ptr->info=item;
	ptr->next=head;  //NOTE
	
	if(head!=NULL){
		while(loc->next != head){
			loc=loc->next;
		}
		loc->next=ptr;
	}
	else
		ptr->next=ptr;

	head=ptr;
}

void CircularLinkedList::traverse(){
	node *ptr;
	ptr=head;
	if(head != NULL){
		do{
			cout<<ptr->info<<" ";
			ptr=ptr->next;
		}while(ptr != head);
	}
	cout<<"\n";
}

int main(int argc, char const *argv[])
{
	CircularLinkedList list;
	list.insertNode(1);
	list.insertNode(2);
	list.insertNode(3);
	list.insertNode(4);
	list.traverse();
	return 0;
}