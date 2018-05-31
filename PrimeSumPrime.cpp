#include <iostream>
using namespace std;
int isPrime(int n){
	if(n%2==0 && n>2)
		return 0;
	if(n==2)
		return 1;
	for(int i=3;i<=n/2;i+=2){
		if(n%i==0)
			return 0;
	return 1;	
	}
}

int main(int argc, char const *argv[])
{
	for(int i=11;i<=1000;i++){
		if(isPrime(i)==1){
			int sum=0;
			int temp=i;
			while(temp>0){
				int rem=temp%10;
				sum+=rem;
				temp/=10;
			}
			if(isPrime(sum)==1)
				cout<<i<<"\n";
		}
	}
	return 0;
}
