#include<iostream>
using namespace std;

class myclass
{
	public:
		myclass (int num)
		{
			int i,sum=0;
			for (i=1;i<=num;i++)
			{
				sum=sum+i;
			}
			cout <<"sum of series="<<sum;
		}
};

int main()
{
	int num,i,sum=0;
	cout <<"enter a number";
	cin >>num;
	
	myclass obj(num);
	return 0;
}
