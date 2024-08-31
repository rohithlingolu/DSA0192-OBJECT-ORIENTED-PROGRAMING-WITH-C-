#include<iostream>
using namespace std;

class myclass
{
	public:
		myclass(int num)
		{
			int n,res=0,rem;
			n=num;
			while (num!=0)
			{
				rem=num%10;
				res=res+rem*rem*rem;
				num=num/10;				
			}
			if (res==n)
			{
				cout<<"armstrong number";
			}
			else
			{
				cout<<"not a armstrong number";
			}
		}
};


int main()
{
	int num,rem,res=0,n;
	cout <<"enter a number";
	cin >>num;
	
	myclass obj(num);
	
	return 0;
}
