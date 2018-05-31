#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string str="sourav saini";

	std::string::iterator it;
	for(it=str.begin(); it!=str.end(); it++)
		cout<<*it;

	std::string::reverse_iterator it1;
	for(it1=str.rbegin(); it1!=str.rend(); it1++)
		cout<<*it1;
	return 0;
}