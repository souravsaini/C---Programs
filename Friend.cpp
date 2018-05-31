#include <iostream>
using namespace std;

class A{
private:
	int a;
public:	
	A(int a){
		this->a = a;
	}
	friend void display(A);  //friend class declaration
};

void display(A x){
	cout<<x.a<<"\n";
}

int main(int argc, char const *argv[])
{
	A a(10);
	display(a);
	return 0;
}