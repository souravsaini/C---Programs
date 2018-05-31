#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x=10;
	int y=5;
	int add(int, int); //function declaration
	int (*ptr)(int, int); //pointer to function
	ptr = add;
	int z = (*ptr)(x, y);  //function call
	cout<<z<<"\n";
	return 0;
}

int add(int x, int y){
	return x+y;
}