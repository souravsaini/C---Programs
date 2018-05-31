#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a=10;
label:	cout<<a;

	goto label;

	return 0;
}