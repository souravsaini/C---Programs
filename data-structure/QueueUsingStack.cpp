#include <iostream>
using namespace std;

class node{
public:
	int info;
	node *next;
};

class Queue{
	node *top1;
	node *top2;
public:
	Queue(){
		top1=top2=NULL;
	}

	void enqueue(*q, int);
	void push(int);

};

void Queue::enqueue(int item){
	push(item);
}

void Queue::push(int item){
	node *ptr;
	ptr=new node;
	ptr->info=item;
	ptr->next=top1;
	top=ptr;
}