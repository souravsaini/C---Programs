#include<iostream>
#include<fstream>
int main(){
	char str[100];
	ifstream inFile;
	inFile.open("Write.txt");
	while(!inFile.eof()){
      inFile>>str;
      cout<<str;
	}
	inFile.close();
}