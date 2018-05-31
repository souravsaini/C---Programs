#include<iostream>

using namespace std;

class BST
{
    struct node
    {
        int data;
        node* left;
        node* right;
    };

    node* root;

    node* insert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }

    void preorder(node *t){
        if(t==NULL)
            return;
        cout<<t->data<<" ";
        preorder(t->left);
        preorder(t->right);
    } 

    void inorder(node* t)
    {
        if(t == NULL)
            return;
        inorder(t->left);
        cout << t->data << " ";
        inorder(t->right);
    }

    void postorder(node *t){
        if(t==NULL)
            return;
        preorder(t->left);
        preorder(t->right);
        cout<<t->data<<" ";
    } 

    node* find(node* t, int x)
    {
        if(t == NULL)
            return NULL;
        else if(x < t->data)
            return find(t->left, x);
        else if(x > t->data)
            return find(t->right, x);
        else
            return t;
    }

public:
    BST()
    {
        root = NULL;
    }

    void insert(int x)
    {
        root = insert(x, root);
    }

    void display()
    {
        preorder(root);
        cout<<endl;
        inorder(root);
        cout<<endl;
        postorder(root);
        cout << endl;
    }

    void search(int x)
    {
        root = find(root, x);
    }
};

int main()
{
    BST t;
    t.insert(20);
    t.insert(25);
    t.insert(15);
    t.insert(10);
    t.insert(30);
    t.insert(32);
    t.insert(100);
    t.display();
}