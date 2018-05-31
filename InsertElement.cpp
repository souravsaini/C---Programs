#include<iostream>
using namespace std;

int main(){
	int a[20],n,k,pos;
	cout<<"Enter length of array";
	cin>>n;
	cout<<"Enter "<<n<<" elements";
	for(int i=0;i<n;i++)
		cin>>a[i];

    cout<<"Enter the index where you want to insert new element";
    cin>>pos;

    cout<<"Enter element";
    cin>>k;

    for(int i=n;i>=pos;i--)  //shifting the element down by 1
    	a[i+1]=a[i];
   
    a[pos]=k;
    n=n+1;

    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
}
