#include<iostream>
using namespace std;

class myclass
{
	public:
		myclass(int num)
		{
			int rev=0,rem,n;
			n=num;
			while (num!=0)
			{
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;
			}
			if (rev==n)
			{
				cout <<"pallindrome number";
			}
			else
			{
				cout <<"not a pallindrome number";
			}
			
		}
};
int main()
{
	int num,rev=0,rem;
	cout <<"enter a number";
	cin >>num;
	
	myclass obj(num);
	 
	 return 0;
}
