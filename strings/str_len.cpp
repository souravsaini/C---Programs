#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string str;
	cout<<"Enter a string\n";
	getline(cin, str);
	// Length of string
	int i=0;
	for(i; str[i]!='\0'; i++);
	cout<<"Length of string is : "<<i<<"\n";
	//reverse the string
	int len = str.length();
	for(int j=0; j<len/2; j++){
		int temp = str[j];
		str[j] = str[len-j-1];
		str[len-j-1] = temp;
	}
	cout<<str<<"\n";
	str.append(" saini");
	cout<<str;
	return 0;
}