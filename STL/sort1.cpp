#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[8]={6,4,3,7,1,2,9,8};
	sort(a,a+4);
	for(int i=0; i<8; i++)
		cout<<a[i]<<"\t";

	if(binary_search(a,a+8,7))
		cout<<"\n Found";
	else
		cout<<"\n Not Found";
	return 0;
}