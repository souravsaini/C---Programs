#include <iostream>
#include <algorithm>
using namespace std;

void swap(int* a, int* b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main(int argc, char const *argv[])
{
	int arr[7] = {12,23,7,6,89,123,54};
	sort(arr, arr+7);
	for(int i=0; i<6; i+=2){
		swap(&arr[i], &arr[i+1]);
	}

	for(int i=0; i<7; i++)
		cout<<arr[i]<<" ";
	return 0;
}