#include<iostream>
using namespace std;
void func(int x,int y){
	int temp=x;
	x=y;
	y=temp;
    cout<<x<<" , "<<y;
}

int main(){
  int a=10,b=20;
  func(a,b);
  cout<<a<<" , "<<b;
	return 0;
}
