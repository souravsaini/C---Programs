#include <iostream>
#include <string>
using namespace std;

class node{
public:	
	char info;
	node *next;
};

class Stack{
	node *top;
public:
	Stack(){
		top=NULL;
	}	

	int isEmpty();
	void push(int);
	int pop();
	void traverse();
	int peek();
	int stringPalindrome();
};

int Stack::isEmpty(){
	return top==NULL? 1 : -1; 
}

void Stack::push(int item){
	node *ptr;
	ptr=new node;
	ptr->info=item;
	ptr->next=top;
	top=ptr;
}

int Stack::pop(){
	if(isEmpty() == 1)
		return -1;
	int item;
	node *ptr;
	item=top->info;
	ptr=top;
	top=top->next;
	delete ptr;
	return item;
}

void Stack::traverse(){
	node *ptr;
	ptr=top;
	while(ptr!=NULL){
		cout<<ptr->info<<" ";
		ptr=ptr->next;
	}
	cout<<"\n";
}

int Stack::peek(){
	if(isEmpty() == 1)
		return -1;
	int item=top->info;
	return item;
}

int main(int argc, char const *argv[])
{
	string str="naman";

	Stack stack;
	//cout<<stack.isEmpty()<<"\n";
	// stack.push(1);
	// stack.push(2);
	// stack.push(3);
	// stack.push(4);
	for(int i=0;i<str.length();i++)
		stack.push(str.at(i));
	//stack.traverse();
	//cout<<stack.pop()<<"\n";
	//stack.traverse();
	//cout<<stack.peek()<<"\n";
	//stack.push(5);
	//stack.traverse();
	string revStr;
	for(int i=0;i<str.length();i++)
		revStr+=stack.pop();

	if(str==revStr)
		cout<<"String is palindrome";
	else
		cout<<"String is not palindrome";
	return 0;
}
