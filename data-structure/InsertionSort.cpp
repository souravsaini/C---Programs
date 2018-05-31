#include <iostream>
using namespace std;

void insertionSort(int a[], int n);

int main(int argc, char const *argv[])
{
	int a[50],n;
	cout<<"Enter size of array\n";
	cin>>n;
	cout<<"Enter "<<n<<" elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];

	insertionSort(a, n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}

void insertionSort(int a[], int n){
	for(int i=1; i<n; i++){
		int temp = a[i];
		int j = i-1;
		while(temp < a[j] && j >= 0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = temp;
	}
}
