#include<iostream>
using namespace std;

class node{
public:
     int info;
     node *next; 
};
class Link{
private:
	 node *head;
public:
     Link(){
     	head=NULL;
     }
    

     void insertBeg(int item);  //function prototype
     void insertEnd(int item);  
     void traverseList(); 
     void countList();
     int searchItem(int item);
     void getMiddleElement();	 
     void checkPalindrome();
     void afterGivenElement(int item, int after);
};


//definition of inserting a node at beginning
void Link::insertBeg(int item){
	node *ptr;
	ptr=new node;
	ptr->info=item;
	if(head==NULL)
		ptr->next=NULL;
	else
	   ptr->next=head;
	head=ptr;
}

void Link::insertEnd(int item){
  node *ptr,*loc;
  ptr=new node;
  ptr->info=item;
  ptr->next=NULL;
  if(head==NULL){
    head=ptr;
  }
  else{
    loc=head;
    while(loc->next!=NULL)
      loc=loc->next;
    loc->next=ptr;
  }
}
//definition of traversing a list
void Link::traverseList(){
	node *ptr;
	ptr=head;
	while(ptr!=NULL){
		cout<<ptr->info<<"->";
		ptr=ptr->next;
	}
  cout<<endl;
}

void Link::countList(){
  node *ptr;
  int count=0;
  ptr=head;
  while(ptr!=NULL){
    ptr=ptr->next;
    count++;
  }
   cout<<"\nLength of Linked List is : "<<count;
}

int Link::searchItem(int item){
  node *ptr;
  ptr=head;
  int count=1;
  bool flag=true;
  if(head==NULL){
    return -1;
  }else{
    while(ptr!=NULL){
      if(ptr->info==item){
        return count
        flag=false;
        break;
      }
      ptr=ptr->next;
      count++;
    }
    if(flag==true)
      return 0;
}

void Link::getMiddleElement(){
  node *slowptr;
  node *fastptr;
  if(head!=NULL){
    slowptr=head;
    fastptr=head;
    while(fastptr!=NULL && fastptr->next!=NULL){
      fastptr=fastptr->next->next;
      slowptr=slowptr->next;
    }
  }
  cout<<"\nMiddle Element is : "<<slowptr->info;
}

/*void Link::afterGivenElement(int item, int after){
  int loc=searchItem(after);
  if(loc==-1)
    cout<<"Element not found"
    return;

  node *ptr;
  ptr=new node;
  ptr->info=item;
  ptr->next= 

}
*/
//main function
int main(){
  Link l;  //creating object
  l.insertBeg(1);
  l.insertBeg(2);
  l.insertBeg(3);
  l.insertBeg(4);
  l.insertBeg(5);
  l.insertBeg(6);
  l.traverseList();
  l.insertEnd(7);
  //l.insertEnd(8);
  l.traverseList();
  l.countList();
  cout<<l.searchItem(6);
  cout<<l.searchItem(8);
  cout<<l.searchItem(10);
  l.getMiddleElement();

  return 0;
}