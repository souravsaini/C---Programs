#include <iostream>
#include <limits.h>
using namespace std;

void findSecondLargest(int a[], int n){
	if(n<2){
		cout<<"Single Element"<<"\n";
		return;
	}

	int first, second = INT_MIN;
	for(int i=0; i<n; i++){
		if(a[i] > first){
			second = first;
			first = a[i];
		}else if((a[i] > second) && (a[i]!=first) )
			second = a[i];
	}
	if(second == INT_MIN)
		cout<<"There is no second largest element "<<"\n";
	else
		cout<<second<<"\n";
}

int main(int argc, char const *argv[])
{
	int a[] = {2,4,6,5,8,7,10};
	int n = sizeof(a)/sizeof(a[0]);
	findSecondLargest(a,n);
	return 0;
}
