#include<iostream>
using namespace std;
int main(){
	cout<<"\nOutside Try block";
	int x=0;
	try{
       cout<<"\n Inside Try block";
       if(x<1)
       	throw x;
       cout<<"Yo Yo Honey singh";
	}catch(int e){
		cout<<"\nException caught";
	}
	cout<<"After catch block";
	return 0;
}