#include<iostream>
using namespace std;

void printArray(int arr[5]);

int main(){
	int arr1[5]={10,20,30,40,50};
	int arr2[5]={20,40,60,80,100};
	printArray(arr1);
	printArray(arr2);
	return 0;
}

void printArray(int arr[5]){
	for(int i=0;i<5;i++)
		cout<<arr[i]<<endl;
}
