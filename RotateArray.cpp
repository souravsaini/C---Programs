#include <iostream>
using namespace std;

void reverseArray(int a[], int start, int end);
void rotateArray(int a[], int d, int n);

void rotateArray(int a[], int d, int n){
	reverseArray(a, 0, d-1);
	reverseArray(a, d, n-1);
	reverseArray(a, 0, n-1);
}

void reverseArray(int a[], int start, int end){
	while(start < end){
		int temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

int main(int argc, char const *argv[])
{
	int a[]={1,2,3,4,5,6,7,8};
	int d=3;
	int n = sizeof(a)/sizeof(a[0]);
	rotateArray(a, d, n);
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}