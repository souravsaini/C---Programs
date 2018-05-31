#include<iostream>
using namespace std;
int main(){
	int i=5;
	int *ptr;
	ptr=&i;

	cout<<"Address of i : "<<&i;
	cout<<"\n Value of ptr is "<<ptr;
	cout<<"\n Value stored at address of ptr is "<<*ptr;
    return 0;
}