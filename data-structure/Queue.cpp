#include <iostream>
using namespace std;

class node{
public:
	int info;
	node *next;
};

class Queue{
	node *front;
	node *rear;
public:
	Queue(){
		front=rear=NULL;
	}
	~Queue(){}

	int isEmpty();
	void enqueue(int);
	int dequeue();
	void traverse();
};

int Queue::isEmpty(){
	return front==NULL ? 1 : 0;
}

void Queue::enqueue(int item){
	node *ptr;
	ptr=new node;
	ptr->info=item;
	ptr->next=NULL;
	if(rear==NULL)
		front=rear=ptr;
	else{
		rear->next=ptr;
		rear=ptr;
	}
}

int Queue::dequeue(){
	int item;
	node *ptr;
	item=front->info;
	ptr=front;
	if(front==rear)  //only one element
		front=rear=NULL;
	else
		front=front->next;
	delete ptr;
	return item;
} 

void Queue::traverse(){
	node *ptr;
	ptr=front;
	while(ptr!=NULL){
		cout<<ptr->info<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
}

int main(int argc, char const *argv[])
{
	Queue queue;
	queue.enqueue(3);
	queue.enqueue(4);
	queue.enqueue(5);
	queue.enqueue(6);
	queue.enqueue(7);
	queue.enqueue(8);
	queue.traverse();
	cout<<queue.dequeue()<<"\n";
	queue.traverse();

	return 0;
}