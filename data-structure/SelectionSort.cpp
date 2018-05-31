#include <iostream>
using namespace std;

void selectionSort(int a[], int n);

int main(int argc, char const *argv[])
{
	int a[50],n;
	cout<<"Enter size of array\n";
	cin>>n;
	cout<<"Enter "<<n<<" elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];

	selectionSort(a, n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
	return 0;
}

void selectionSort(int a[], int n){
	int loc, small, temp;
	for(int i=1; i<n; i++){
		small=a[i-1];
		loc=i-1;

		for(int j=i; j<n; j++){
			if(a[j] < small){
				small=a[j];
				loc=j;
			}
		}
		if(loc != (i-1)){
			temp=a[i-1];
			a[i-1]=a[loc];
			a[loc]=temp;
		}
	}
}