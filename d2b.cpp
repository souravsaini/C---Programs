#include <iostream>
using namespace std;

void print(int arr[],int i){
	for(int j=i-1;j>=0;j--)
		cout<<arr[j];
}

int main(int argc, char const *argv[])
{
	int num;
	cout<<"Enter a number (in decimal)";
	cin>>num;

	int arr[100],i=0;

	while(num>0){
		arr[i++]=num%2;
		num=num/2;
	}

	print(arr,i);
	
	return 0;
}