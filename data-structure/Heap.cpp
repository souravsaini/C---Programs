#include <iostream>
using namespace std;

class Heap{
	int heap[50];
	int n;
	int size;
public:
	Heap(int size){
		n=0;	
		this->size=size;
	}
	void insertElement(int);
	void reheapifyUpward(int);
	int deleteElement();
	void reheapifyDownward(int, int);
	int deleteElementFromGiven(int);
	void traverse();
};

void Heap::insertElement(int item){
	n++;
	heap[n]=item;
	reheapifyUpward(n);
}

void Heap::reheapifyUpward(int start){
 	int temp,parent;
 	if(start>1){
 		parent=start/2;
 		if(heap[parent] < heap[start]){
 			temp=heap[start];
 			heap[start]=heap[parent];
 			heap[parent]=temp;	
 			reheapifyUpward(parent);
 		}
 	}
}

int Heap::deleteElement(){
	int item;
	item=heap[1];
	heap[1]=heap[n];
	n--;
	reheapifyDownward(1,n);
	return item;
}

void Heap::reheapifyDownward(int start, int finish){
	int index,lchild,rchild;
	int max,temp;
	lchild = 2*start;  //index of left child
	rchild = lchild+1; //index of right child
	if(lchild <= finish){
		max=heap[lchild];
		index=lchild;
		if(rchild <= finish){
			if(heap[rchild] > max){
				max=heap[rchild];
				index=rchild;
			}
		}
		if(heap[start] < heap[index]){
			temp=heap[start];
			heap[start]=heap[index];
			heap[index]=temp;
			reheapifyDownward(index,finish);
		}
	}
}

int Heap::deleteElementFromGiven(int pos){
	int item;
	item=heap[pos];
	heap[pos]=heap[n];
	n--;
	reheapifyDownward(pos,n);
	return item;
}

void Heap::traverse(){
	for(int i=1;i<=n;i++)
		cout<<heap[i]<<" ";
	cout<<"\n";
}


int main(int argc, char const *argv[])
{
	Heap heap(6);
	heap.insertElement(8);
	heap.insertElement(4);
	heap.insertElement(12);
	heap.insertElement(11);
	heap.insertElement(2);
	heap.insertElement(17);
	heap.traverse();
	cout<<heap.deleteElement()<<"\n";
	heap.traverse();
	cout<<heap.deleteElementFromGiven(3)<<"\n";
	heap.traverse();

	return 0;
}
