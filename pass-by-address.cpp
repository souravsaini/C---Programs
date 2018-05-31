#include <iostream>

using namespace std;

void swap(int *a, int *b){
	*a=*a + *b;
	*b=*a - *b;
	*a=*a - *b;
}

int main(int argc, char const *argv[])
{
	int a=10;
	int b=20;
	swap(&a,&b);
	cout<<a<<" "<<b;
	return 0;
}