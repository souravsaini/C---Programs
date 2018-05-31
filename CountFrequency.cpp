#include <iostream>
using namespace std;

int maximum(int arr[], int n){
	int max = 0;
	for(int i=0; i<n; i++){
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}

void countFrequencies(int arr[], int n, int max){
	int a[max]={0};

	//mapping
	for(int i=1;i<=n;i++){
		a[arr[i]]+=1;
	}

	for(int i=1;i<=max;i++){
		cout<<i<<"\t"<<a[i]<<endl;
	}
}

int main(int argc, char const *argv[])
{
	int arr[]={1,1,4,3,3,3,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	int max = maximum(arr, n);
	countFrequencies(arr, n, max);
	return 0;
}