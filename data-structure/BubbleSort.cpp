#include <iostream>
using namespace std;

class BubbleSort{
	int a[50];
	int n;
public:
	void input();
	void output();
	void sort();
};

void BubbleSort::input(){
	cout<<"Enter size of array\n";
	cin>>n;
	cout<<"Enter "<<n<<" elements\n";
	for(int i=0;i<n;i++)
		cin>>a[i];
}

void BubbleSort::output(){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
}

void BubbleSort::sort(){
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
}

int main(int argc, char const *argv[])
{
	BubbleSort bubble;
	bubble.input();
	bubble.sort();
	bubble.output();
	return 0;
}