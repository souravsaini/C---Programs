#include<iostream>
using namespace std;
int main(){
	int *a[2];
	int b=10;
	int c=20;
    a[0]=&b;
	a[1]=&c;
	for(int i=0;i<2;i++)
		cout<<"\n Address "<<a[i]<<" pointing to "<<*a[i];
    return 0;
}