#include<iostream>
using namespace std;
void myfunction(int fact,int n)
{
	for (int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	cout <<fact;
}

int main()
{
	int fact=1,n;
	cout <<"enter a number";
	cin >>n;
	myfunction(fact,n);
	
	return 0;
}
