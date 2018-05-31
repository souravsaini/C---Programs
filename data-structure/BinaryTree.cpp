#include <iostream>
using namespace std;

class node{
public:
	node *left;
	int info;
	node *right;
};

class BinaryTree{
public:	
	node *root;
	BinaryTree(){
		root=NULL;
	}

	~BinaryTree(){ }

	void insertNode(node *, int);
	void preOrderTraversel(node *);
	void inOrderTraversel(node *);
};


void BinaryTree::insertNode(node *root, int item){
	node *ptr;

	if(root==NULL){
		cout<<item<<" ";
		ptr=new node;
		ptr->info=item;
		ptr->left=NULL;
		ptr->right=NULL;
	}
	else if(item < root->info) {
		insertNode(root->left, item);
	}
	else {
		insertNode(root->right, item);
	}
}

void BinaryTree::preOrderTraversel(node *root){
	if(root!=NULL){
		cout<<root->info<<" ";
		preOrderTraversel(root->left);
		preOrderTraversel(root->right);
		cout<<"\n";
	}
}

void BinaryTree::inOrderTraversel(node *root){
	if(root!=NULL){
		inOrderTraversel(root->left);
		cout<<root->info<<" ";
		inOrderTraversel(root->right);
		cout<<"\n";
	}
}
//End of class definition

int main(int argc, char const *argv[])
{
	BinaryTree tree;
	tree.insertNode(tree.root,1);
	tree.insertNode(tree.root,2);
	tree.insertNode(tree.root,3);
	tree.insertNode(tree.root,5);
	tree.insertNode(tree.root,4);
	tree.insertNode(tree.root,6);
	tree.insertNode(tree.root,4);
	tree.insertNode(tree.root,12);
	tree.insertNode(tree.root,7);
	//tree.preOrderTraversel(tree.root);
	tree.inOrderTraversel(tree.root);
	return 0;
}