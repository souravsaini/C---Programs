#include <iostream>
using namespace std;

class node{
public:
	int info;
	node *next;
};

class List{
	node *head;
public:
	List(){
		head = NULL;
	}
	void insertSorted(int item);
	void traverse();
};

void List::insertSorted(int item){
	node *ptr;
	ptr=new node;
	ptr->info=item;
	cout<<"Working"<<"\n";
	if(head==NULL || head->info >= item){
		ptr->next=NULL;
		head=ptr;
	}
	else{
		node *loc;
		loc=head;
		while((loc->next)->info < item || loc->next!=NULL )
			loc=loc->next;
		
		ptr->next=loc->next;
		loc->next=ptr;
	}
}

void List::traverse(){
	node *ptr;
	//for(ptr=head; ptr!=NULL; ptr=ptr->next)
	//	cout<<ptr->info<<" ";
}

int main(int argc, char const *argv[])
{
	List list;
	list.insertSorted(2);
	list.insertSorted(6);
	list.insertSorted(4);
	list.insertSorted(3);
	list.insertSorted(10);
	list.traverse();
	return 0;
}