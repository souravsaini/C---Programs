#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str = "geeksforgeeks";
    
   // Reverse str[beign..end]
   reverse(str.begin(),str.end());
    
   cout << str;
   return 0;
}