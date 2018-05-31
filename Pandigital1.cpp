#include <iostream>
#include <math.h> 
using namespace std;

bool isPrime(int n){
	if(n%2 == 0 || n<2)
		return false;
	for(int i=3; i<=sqrt(n); i++)
		if(n%i==0)
			return false;
	return true;	
}
int main(int argc, char const *argv[])
{
	int i;
	cin>>i;

	if(isPrime(i)){

		// To find length of number
		int len = floor(log10(i)) + 1;

		//Initialize an array of size 10 to all zeros.
		int arr[10]={0};
		int temp=i;

		//Split the given number into digits
		while(temp>0){
			int rem=temp%10;
			arr[rem]=1;
			temp/=10;
		}
		// Check the array from 1 to length of number and check if any of 
		// index is 0, it means the number is not pandigital.
		bool flag = true;
		for(int j=1;j<=len;j++){
			if(arr[j]==0){
				flag = false;
				break;
			}
		}
		if(flag)
			cout<<"Pandigital Prime"<<"\n";
		else
			cout<<"Not Pandigital Prime"<<"\n";
	}else
		cout<<"Not Pandigital Prime"<<"\n";
	return 0;
}