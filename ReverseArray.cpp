#include <iostream>
using namespace std;

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void reverseArray(int a[], int n){
	for(int i=0; i<n/2; i++){
		swap(&a[i],&a[n-i-1]);
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	reverseArray(a, n);
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}