#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int binary;
	int octal,decimal;
	cout<<"enter a binary value";
	cin >>binary;
	decimal=(binary)/10;
	octal=decimal/8;
		cout <<"binary to octal="<<octal;
}
