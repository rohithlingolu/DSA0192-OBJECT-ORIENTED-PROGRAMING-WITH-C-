#include<iostream>
using namespace std;

void myfunction(int num,int sum)
{
	for(int i=1;i<=num/2;i++)
	if (num%i==0)
	{
		sum=sum+i;
	}
	
	if (sum==num)
	cout <<"perfect number";
	else
	cout <<"not a perfect number";
}

int main()
{
	int num,i,sum=0;
	cout <<"enter a number";
	cin  >>num;
	myfunction(num,sum);
	
	return 0;
}
