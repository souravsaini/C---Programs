#include <iostream>
using namespace std;

class score{
private:
	int a;
public:
	score(int a){
		this->a = a;
	}

	score operator ++(){
		score temp;
		a=a+1;
		temp.a = a;
		return temp;
	}

	int show(){
		return a;
	}
};

int main(int argc, char const *argv[])
{
	score s1(10);
	score s2(20);
	++s1;
	++s2;
	cout<<s1.show()<<"\n";
	cout<<s2.show()<<"\n";
	return 0;
}

