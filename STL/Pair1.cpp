#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	pair<int, char> p1;
	pair<int, char> p2;
	pair<float,string> p3;
	p1.first = 10;
	p1.second = 'a';
	p2.first = 20;
	p2.second = 'b';
	p3.first = 30;
	p3.second = "sourav";
	cout<<p1.first+p2.first<<"\n";
	cout<<p1.second+p2.second<<"\n";
	cout<<p2.second+p3.second<<"\n";

	return 0;
}
