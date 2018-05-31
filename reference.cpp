#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	int x=20;
	int& ref=x;
	ref=30;
	int y=10;
	ref=y;

	cout<<x;

/*
	int i;
	for(i=0;i<=5;i++){
		cout<<i;
	}
	cout<<i;*/

	return 0;
}