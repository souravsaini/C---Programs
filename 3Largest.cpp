#include <iostream>
#include <limits.h>
using namespace std;

void find3Largest(int arr[], int n){
	int first, second, third; 
	first = second = third = INT_MIN;
	for(int i=0; i<n; i++){
		if(arr[i] > first){
			third = second;
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second){
			third = second;
			second = arr[i];
		}
		else{
			third = arr[i];
		}
	}
	cout<<"Largest three numbers are : "<<first<<" , "<<second<<" , "<<third<<"\n";
}


int main(int argc, char const *argv[])
{
	int arr[] = {10,23,45,13,67,21,78,99};
	int n = sizeof(arr)/sizeof(arr[0]);
	find3Largest(arr, n);
	return 0;
}