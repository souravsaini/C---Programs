#include <iostream>
using namespace std;

class CircularQueue{
protected:
	int front;
	int rear;
	int size;
	int *queue;
public:
	CircularQueue(){
		queue=new int[20];
		front=rear=-1;
		size=10;
	}
	CircularQueue(int n){
		queue=new int[20];
		front=rear=-1;
		size=n;
	}
	~CircularQueue(){
		delete queue;
		front=rear=-1;
		size=0;
	}
	int isEmpty();
	int isFull();
	void enqueue(int);
	int dequeue();
	void traverse();
};

int CircularQueue::isEmpty(){
	return front== -1 ? 1:0;
}

int CircularQueue::isFull(){
	if(((front==0) && (rear==size-1)) || front==rear+1)
		return 1;
	else
		return 0;
}

void CircularQueue::enqueue(int item){
	if (front== -1)
		front=rear=0;
	else 
		rear=(rear+1)%size;
	queue[rear]=item;
}

int CircularQueue::dequeue(){
	int item=queue[front];
	if(front==rear)
		front=rear=-1;
	else
		front=(front+1)%size;
	return item;
}

void CircularQueue::traverse(){
	for(int i=front;i<size;i++)
		cout<<queue[i]<<" ";
}
int main(int argc, char const *argv[])
{
	CircularQueue queue(10);
	for(int i=1;i<=10;i++)
		queue.enqueue(i);
		cout<<queue.dequeue()<<"\n";
		queue.traverse();

	return 0;
}
