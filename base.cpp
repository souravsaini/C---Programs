#include <iostream>
#include <iomanip>

using namespace std;
int main(int argc, char const *argv[])
{
	int i;
	cout<<"Enter a number\n";
	cin>>i;
	cout<<"Hexa : "<<setbase(16)<<i<<"\n";
	cout<<"Octal : "<<setbase(8)<<i<<"\n";
	cout<<"Decimal : "<<setbase(10)<<i;
	return 0;
}
