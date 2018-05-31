#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	void func();
	func();
	func();
	func();
	return 0;
}

void func(){
	int x=1;
	static int y=1;
	x++;
	y++;

	cout<<x<<" "<<y<<"\a"; 
}