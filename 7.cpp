#include<iostream>
using namespace std;

void myfunction(int num)
{
	for (int i=1;i<=num;i++)
	{	
    if (num%2==0 || num%3==0)
    {
		cout <<"even number";
	}
	else
	{
	cout <<"odd num";
}
}
}
int main()
{
	int num;
	cout <<"enter a number";
	cin >>num;
	myfunction(num);
	return 0;
	}
