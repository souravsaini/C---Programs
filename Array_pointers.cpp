#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[5]={10,20,30,40,50};
	int *ptr;
	ptr=a;
	int sum=0;
	for(int i=0;i<5;i++){
		//cout<<ptr+i<<" ";
		sum += *(ptr+i);
	}

	cout<<sum<<"\n";
	return 0;
}