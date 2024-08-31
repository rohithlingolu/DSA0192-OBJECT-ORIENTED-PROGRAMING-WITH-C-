#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int number,i,sum=0;
	cout <<"enter a number";
	cin >>number;
	for (i=1;i<=number/2;i++)
	if (number%i==0)
	{
		sum=sum+i;
	}
if (sum==number)
   cout <<"perfect number";
else
   cout <<"not a perfect number";

	
}
