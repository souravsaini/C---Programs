#include <iostream>
using namespace std;

class CircularList{
private:
	struct node{
		int info;
		node *next;
	};
	node *last;

	int isEmpty(node *last){
		if(last==NULL)
			return 1;
		else
			return 0;
	}

	node* addFirst(node *ptr, int item){
		ptr = new node;
		ptr->info = item;
		ptr->next = ptr;
		return ptr;
	}

	void traverse(node *ptr){
		node *temp = ptr;
		//if list is not empty
		if(ptr!=NULL){
			do{
				cout<<ptr->info<<" ";
				ptr=ptr->next;
			}while(ptr!=temp);
			cout<<"\n";
		}
	}

public:
	CircularList(){
		last = NULL;
	}
	
	void addFirstNode(int item){
		addFirst(last, item);
	}

	void traverseList(){
		traverse(last);
	}
};

int main(int argc, char const *argv[])
{
	CircularList list;
	list.addFirstNode(10);
	list.traverseList();
	return 0;
}