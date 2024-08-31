#include<iostream>
using namespace std;

class myclass
{
	public:
		myclass (int num)
		{
			int i,sum=0;
			
			for(i=1;i<num;i++)
			{
			
			if (num%i==0)
			{
				sum=sum+i;
			}
		}
			if (num==sum)
			{
				cout <<"perfect number";
			}
			else
			{
				cout <<"not a perfect number";
			}
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
