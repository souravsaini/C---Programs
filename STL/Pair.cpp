#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	pair<int,int> pair1,pair2;
	pair<int,string> pair3;
	pair1 = make_pair(1,2);
	pair2 = make_pair(2,3);
	pair3 = make_pair(1,"sourav");

	cout<<pair1.first<<" "<<pair3.second<<"\n";
	if(pair1==pair2)
		cout<<"Same";
	else
		cout<<"Different";
	return 0;
}