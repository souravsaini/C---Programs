#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{	
	void display(string);
	string name="sourav saini";
	display(name);
	return 0;
}

void display(string name){
	cout<<name<<"\n";
}