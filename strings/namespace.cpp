#include <iostream>
using namespace std;
 
namespace first{
	int a=50;
}

namespace second{
	int a=20;
}

int main(int argc, char const *argv[])
{
	int a=40;
	cout<<first::a<<"\n";
	cout<<second::a;
	return 0;
}
