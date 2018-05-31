#include<iostream>
using namespace std;
class StaticExample
{
private:
	int rollno;
	string name;
	static int count;
public:
	StaticExample(int rollno,string name){
		this->rollno=rollno;
		this->name=name;
		count++;
	}
	void print(){
		cout<<"Student number : "<<count<<endl;
	}
};

int StaticExample::count=0;  //Initialization of static variable

int main(){
	StaticExample s1(123,"Sonu");
	s1.print();
	StaticExample s2(124,"Manu");
	s2.print();
	StaticExample s3(125,"Yoyo");
	s3.print();
	return 0;
}