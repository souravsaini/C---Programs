#include <iostream>
using namespace std;

class node{
public:
	int info;
	node *next;
};

class Link{
	node *head;
public:
	Link(){
		head=NULL;
	}
	void addEnd(int);
	void duplicateRemove();
	void traverse();
};

void Link::addEnd(int item){
	node *ptr,*loc;
	ptr=new node;
	ptr->info=item;
	loc=head;
	while(loc->next!=NULL){
		loc=loc->next;
	}
	ptr->next=NULL;
	loc->next=ptr;
}

void Link::duplicateRemove(){
	node *ptr,*loc;
	loc=head;
	while(loc!=NULL){
		if(loc->info == (loc->next)->info){
			ptr=loc->next;
			loc->next=ptr->next;
			delete ptr;	
		}
		loc=loc->next;
	}
}

void Link::traverse(){
	node *ptr;
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->info<<" ";
		ptr=ptr->next;
	}
}

int main(int argc, char const *argv[])
{
	Link l;
	l.addEnd(1);
	l.addEnd(2);
	l.addEnd(2);
	l.addEnd(3);
	l.addEnd(3);
	l.addEnd(3);
	//l.traverse();
	return 0;
}