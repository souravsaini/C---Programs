#include <iostream>
#include <string> 


using namespace std;

int main()
{
	string s="Hello";
	string str("Hello");
 	cout<<s<<endl<<str;
 	cout<<str+s;
 	string s1="sourav";
 	string s2="saini";
 	string s3=s1+" "+s2;
 	cout<<"\n"<<s3;
 	string s4(10,'$');
 	cout<<"\n"<<s4;
 	//Append str
 	s3.append("Programmer");
 
 	cout<<s3;
 return 0;
}