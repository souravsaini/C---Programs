#include <iostream>
using namespace std;

class node{
public:
	node *left;
	int info;
	node *right;
};

class Tree{
public:
	node *root;
	Tree(){
		root=NULL;
	}

	node* create_node(node *, int);
	void getHeight(node *);
};

node* create_node(node *root, int item){
	node *ptr;
	ptr=new node;
	ptr->info=item;
	ptr->left=NULL;
	ptr->right=NULL;

}