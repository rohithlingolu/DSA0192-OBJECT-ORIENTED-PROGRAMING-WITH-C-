#include<iostream>
using namespace std;
void myfunction(int num,int rem,int reverse)
{
	while(num!=0)
	{
	
	rem=num%10;
	reverse=reverse*10+rem;
	num=num/10;
}
	cout <<reverse;
}

int main()
{
	int num,rem,reverse=0;
	cout <<"enter a number";
	cin >>num;
	myfunction(num,rem,reverse);
	
	return 0;
}
