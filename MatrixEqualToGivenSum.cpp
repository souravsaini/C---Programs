#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	void func(int array[], int k, int n);
	int array[]={1,2,3,4,5,6};
	int k=8;
	int n = sizeof(array)/sizeof(array[0]);
	func(array, k, n);
	return 0;
}

void func(int array[], int k, int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(array[i]+array[j]==k){
				cout<<"("<<array[i]<<","<<array[j]<<")";
			}
		}
	}
}