#include <iostream>
using namespace std;

template<class T>
T max(T a, T b){
	return (a>b)? a:b;
}

int main(int argc, char const *argv[])
{
	cout<<max(10,20)<<"\n";
	cout<<max(10.5,6.3)<<"\n";
	cout<<max('A','a');

	return 0;
}