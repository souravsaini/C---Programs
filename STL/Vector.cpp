#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<string> v;
	v.push_back("sourav");
	v.push_back("saini");
	v.push_back("shaurya");
	v.push_back("Daljit");
	for (vector<string>::iterator i = v.begin(); i != v.end(); ++i)
	{
		cout<<*i<<" , ";
	}
	return 0;
}