#include<iostream>
using namespace std;

int add(int x,int y=20){
    return (x+y);
}

int main(){
	cout<<add(100,200);
	cout<<endl;
	cout<<add(100);
	return 0;
}