#include <iostream>
using namespace std;

void heapSortMethod(int a[], int n);
void downheap(int a[], int start, int finish);
void heapify(int a[], int n);

int main(int argc, char const *argv[])
{
	int n,a[50];
	cout<<"Enter size of array\n";
	cin>>n;
	cout<<"Enter "<<n<<" elements\n";
	for(int i=1;i<=n;i++)
		cin>>a[i];

	heapSortMethod(a, n);

	//Print sorted array
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}

void heapify(int a[], int n){
	int index;
	index=n/2;
	for(int i=index; i>=1; i--)
		downheap(a,i,n);	
}

void downheap(int a[], int start, int finish){
	int index, lchild, rchild, max, temp;
	lchild = 2*start;
	rchild = lchild+1;
	if(lchild <= finish){
		max = a[lchild];
		index = lchild;
		if(rchild <= finish){
			if(a[rchild] > max){
				max = a[rchild];
				index = rchild;
			}
		}
		if(a[start] < a[index]){
			temp = a[start];
			a[start] = a[index];
			a[index] = temp;
			downheap(a, index, finish);
		}
	}
}

void heapSortMethod(int a[], int n){
	int temp;
	heapify(a, n);
	for(int i=n; i>1; i--){
		temp = a[1];
		a[1] = a[i];
		a[i] =temp;
		downheap(a, 1, i-1);
	}
}