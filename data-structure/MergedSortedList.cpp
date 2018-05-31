#include <iostream>
using namespace std;

class node{
public:
	int info;
	node *next;
};

class LinkedList{
	node *head;
public:
	LinkedList(){
		head=NULL;
	}

	LinkedList mergeSorted(LinkedList, LinkedList);
	void addEnd(int);
	void show();
};

LinkedList LinkedList::mergeSorted(LinkedList list1, LinkedList list2){
	LinkedList list3;
	node *ptr1,*ptr2,*ptr3;
	ptr1=list1.head;
	ptr2=list2.head;
	ptr3=list3.head;

	while(ptr1 != NULL && ptr2 != NULL){
		if(ptr1->info <= ptr2->info){
			list3.addEnd(ptr1->info);
			ptr1=ptr1->next;
		}else{
			list3.addEnd(ptr2->info);
			ptr2=ptr2->next;
		}
		ptr3=ptr3->next;
	}

	if(ptr1==NULL)
		while(ptr2 !=NULL){
			list3.addEnd(ptr2->info);
			ptr2->next=ptr2->next;
			ptr3=ptr3->next;
		}	

	if(ptr2==NULL)
		while(ptr1 !=NULL){
			list3.addEnd(ptr1->info);
			ptr1=ptr1->next;
			ptr3=ptr3->next;	
		}
	
	return list3;	
}

void LinkedList::addEnd(int item){
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

void LinkedList::show(){
	node *ptr;
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->info<<"->";
		ptr=ptr->next;
	}
	cout<<"\n";
}

int main(int argc, char const *argv[])
{
	LinkedList list1;
	LinkedList list2;
	LinkedList list3;
	list1.addEnd(2);
	list1.addEnd(4);
	list1.addEnd(6);
	list2.addEnd(1);
	list2.addEnd(3);
	list2.addEnd(5);
	list1.show();
	list2.show();
	//list3.mergeSorted(list1,list2);
	//list3.show();
	return 0;
}