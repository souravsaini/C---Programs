#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[]={1,2,3,4,5};
	int *ptr = a;
	for(int i=0;i<5;i++)
		cout<<*(ptr+i);

	char *s = "Hello World";
	while(*ptr!='\0')
        cout<<*ptr++<<"\n";
	return 0;
}