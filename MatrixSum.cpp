#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m;
	cin>>n;
	int a[m][n];
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];

	int max = 0;
	int row = 0;
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=0;j<n;j++){
			sum += a[i][j];
		}
		if(sum > max){
			max = sum;
			row = i;
		}
	}
	cout<<"Max sum is : "<<max<<endl;;
	cout<<"Row no. : "<<row<<endl;
	return 0;
}