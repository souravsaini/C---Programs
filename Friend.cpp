#include<iostream>
using namespace std;
class Box{
private:
	int length;
	int breadth;
public:
	Box(int length,int breadth){
		this->length=length;
		this->breadth=breadth;
	}
	friend void changeDimensions(Box &b);  //declaration of friend function by passing the reference

	void print(){
		cout<<"Length is : "<<length<<endl;
		cout<<"Breadth is : "<<breadth;
	}
};

void changeDimensions(Box &b){   //friend function definition
	b.length+=10;
	b.breadth+=10;
	cout<<b.length<<" , "<<b.breadth;
}

int main(){
	Box b(20,20);
    changeDimensions(b);
    b.print();
    return 0;
}