#include <iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout <<"enter numbers";
	cin >>num1>>num2>>num3;
	 
	if(num1>=num2 && num1>=num3)
	{
		cout <<"largest number is num1"<<num1;
	}
	else if (num2>=num1 && num2>=num3)
	{
		cout <<"largest number is num2"<<num2;
	}
	else
	{
		cout <<"largest number is num3"<<num3;
	}
return 0;
}
