#include <iostream>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
  array<int,10> array1 = {1,2,3,4,5,6,7,8,9};
   
  cout << array1.at(2); // prints 3
  cout << array1.at(4); // prints 5
  cout<< array1.at(9);
  return 0;
}