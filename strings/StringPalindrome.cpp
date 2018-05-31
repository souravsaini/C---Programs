#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	string str = "thissiht";
	int len = str.length();
	int flag=0;
	for(int i=0; i<len/2; i++){
		if(str[i] != str[len-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==1)
		cout<<"Not palindrome";
	else
		cout<<"Palindrome";
	return 0;
}