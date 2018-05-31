#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[]){
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
}

int main(int argc, char const *argv[])
{
	int array[10]={3,5,1,5,7,9,8,10,1,2};

	cout<<"Array before sorting\n";
	show(array);

	sort(array,array+10);   //sort library function

	cout<<"Array after sorting\n";
	show(array);
	return 0;
}