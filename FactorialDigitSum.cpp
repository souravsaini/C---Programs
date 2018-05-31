#include <iostream>
using namespace std;

long fact(int n){
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}

int main(int argc, char const *argv[])
{
	for(int i=11;i<=20;i++){
		long factorial = fact(i);
		cout<<"Factorial of "<<i<<" : "<<factorial<<" ; ";
		int sum=0;
		while(factorial > 0){
			int rem = factorial%10;
			sum += rem;
			factorial/=10;
			if(factorial>0)
				cout<<rem<<"+";
			else
				cout<<rem;
		}
		cout<<" : "<<sum;
		cout<<"\n";
	}
	return 0;
}