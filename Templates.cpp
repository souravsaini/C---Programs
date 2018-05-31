#include <iostream>
using namespace std;

template<typename T>
T max(T a, T b){
	return (a>b ? a : b);
}

int main(int argc, char const *argv[])
{
	int x=10,y=20;
	float a=10.5,b=4.6;
	char c1='b',c2='e';
	cout<<max<float>(a,b)<<"\n";
	cout<<max<int>(x,y)<<"\n";
	cout<<max<char>(c1,c2);
	return 0;
}