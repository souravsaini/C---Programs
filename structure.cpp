#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	struct student{
		int rollno;
		string name;
		float marks;
	}s1,s2,*ptr;

	ptr=&s1;
	s1.rollno = 1418610;
	s2.rollno = 1512793;
	cout<<s1.rollno<<"\n";
	cout<<s2.rollno<<"\n";
	s1.name = "Sourav Saini";
	s2.name = "Shaurya Bakshi";
	cout<<ptr->name<<"\n";
	cout<<s2.name<<"\n";
	cout<<s1.marks;
	return 0;
}