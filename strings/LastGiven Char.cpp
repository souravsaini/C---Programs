#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string str="sourav";
	char ch = 'u';
	bool flag = true;
	for(int i=str.length()-1; i>=0; i--){
		if(str[i] == ch){
			cout<<"Index"<<i<<"\n";
			flag=false;
			break;
		}
	}
	if(flag==true)
		cout<<"Char not found";
	return 0;
}