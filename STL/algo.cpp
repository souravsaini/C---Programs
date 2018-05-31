#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<int> v;
	int a,n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	for(int i=0; i<n ;i++)
		cout<<v[i]<<" ";

	cout<<"\n"<<*max_element(v.begin(), v.end());
	cout<<"\n"<<accumulate(v.begin(), v.end(), 0);
	return 0;
}
