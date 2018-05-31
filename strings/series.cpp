//1+x+(x**2)/2+(x**3)/3....

#include <iostream>

using namespace std;

float square(int x,int i){
	float sum=0;
	for(int j=1;j<=i;j++)
		sum+=x*i;

	return sum;
}

int fact(int n){
	int fact;
	for(int i=1;i<=n;i++)
		fact*=i;

	return fact;
}



int main(int argc, char const *argv[])
{
	int n,x;
	cout<<"Number of terms and value of x : ";
	cin>>n>>x;
	float sum=1;

	if(n==1)
		cout<<sum;
	else if(n==0)
		cout<<"0";
	else{
		for(int i=1;i<=n;i++)
			sum+=square(x,i)/fact(i);
	}

	cout<<sum;

	return 0;
}