#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int k=1;
	for(int i=0;i<4;i++){
		for(int j=0;j<=i;j++){
			cout<<k++<<" ";
		}
		cout<<"\n";
	}

	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0)
				cout<<"* ";
			else
				cout<<i<<" ";
		}
		cout<<"\n";
	}

	for(int i=1;i<=5;i++){
		for(int j=5;j>=i;j--){
			cout<<j<<" ";
		}
		cout<<"\n";
	}

	if(cout<<"Hello World"){}

	int x=10;
	cout<<sizeof(x++)<<"\n";
	cout<<x;
	return 0;
}