/*


Given an input Array which contains elements as below
[a1,a2,a3,....an,b1,b2,b3,...bn]

Output Should be
[a1,b1,a2,b2,a3,b3,.....an,bn]

Do it without any additional Memory.


Solution:  
1 2 3 5 4 6 7 8 
1 2 5 3 4 6 7 8 
1 2 5 3 6 4 7 8 
1 5 2 3 6 4 7 8 
1 5 2 6 3 4 7 8 
1 5 2 6 3 7 4 8 
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[]={1,2,3,4,5,6,7,8};
	int len = sizeof(a)/sizeof(a[0]);

	
	for(int i=0; i<(len/2)-1; i++){
		int k=len/2-i-1;
		for(int j=0; j<=i; j++){
			int temp=a[k];
			a[k] = a[k+1];
			a[k+1] = temp;
			for(int i=0; i<len; i++)
				cout<<a[i]<<" ";
			cout<<"\n";
			k+=2;
		}
	}

	//for(int i=0; i<len; i++)
	//	cout<<a[i]<<" ";
	return 0;
}