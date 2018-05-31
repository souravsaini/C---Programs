#include <iostream>
#include <math.h> 
using namespace std;
int main(int argc, char const *argv[])
{
	for(int i=101;i<=1000;i++){
		int temp=i;
		int len;
		//Length of number
		len = floor(log10(temp)) + 1;
		int arr[10]={0};
		int temp1=i;
		while(temp1>0){
			int rem=temp1%10;
			arr[rem]=1;
			temp1/=10;
		}
		int k=0;
		for(int j=1;j<=len;j++){
			if(arr[j]==0){
				k=1;
				break;
			}
		}
		if(k==0)
			cout<<i<<"\n";
	}
	return 0;
}