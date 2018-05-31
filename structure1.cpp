#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	struct student{
		int rollno;
		string name;
		float marks;
	};

	student s1 = {101,"sourav",90};
	cout<<s1.marks;
	return 0;
}