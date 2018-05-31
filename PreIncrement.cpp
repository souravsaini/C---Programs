#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a=10;
	++a = 20;
	cout<<a;


	int arr[2][2]={10,11,12,13};
	int *ptr=*arr;
	cout<<(*(ptr+2));
	return 0;
}