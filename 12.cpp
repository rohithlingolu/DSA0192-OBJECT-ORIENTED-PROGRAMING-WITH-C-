#include<iostream>
using namespace std;

class myclass
{
	public:
		myclass(int num)
		{
			int fact=1,i;
			
			for (i=1;i<=num;i++)
			{
				fact=fact*i;
			}
			
			cout <<"factorial of num"<<fact;
		}
};

int main()
{
	int num,i,fact=1;
	cout <<"enter a number";
	cin >>num;
	
	myclass obj(num);
	
	return 0;
}
