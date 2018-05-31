#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int x=-1;
try{
	if(x<0){
		throw x;
		cout<<"Inside try";
	}
}catch(char x){
		cout<<"Exception caught"<<x;
	}
	catch(...){
		cout<<"Father of all catch()";
	}	
	cout<<"Out of try and catch";
	
	return 0;
}
