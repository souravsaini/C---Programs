#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v;
	vector<int> :: iterator i;
	vector<int> :: reverse_iterator ir;
	for(int i=0; i<8; i++)
		v.push_back(i);

	for(i=v.begin(); i!=v.end(); i++)
			 cout<<*i<<" ";
	cout<<"\n";

	for(ir=v.rbegin(); ir!=v.rend(); ir++)
		cout<<*ir<<" ";
	cout<<"\n";

	cout<<v.size()<<"\n";
	cout<<v.max_size()<<"\n";
	cout<<v.capacity()<<"\n";
	cout<<v[0]<<" "<<v[1]<<"\n";
	cout<<v.at(4)<<"\n";
	cout<<v.front()<<" "<<v.back()<<"\n";
	return 0;
}
