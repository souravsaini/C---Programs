#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int sum = 0;
	for(int i=1; ; i++){
		if(sum == n){
			cout<<i-1<<"\n";
			break;
		}
		else if(sum < n)
			sum += i;
		else{
			cout<<"-1"<<"\n";
			break;
		}
	}
	return 0;
}