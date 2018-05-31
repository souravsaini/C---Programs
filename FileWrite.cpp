#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ofstream outFile;
	outFile.open("Write.txt");
	outFile<<"\n Enter some Text";
	outFile.close();
	return 0;
}