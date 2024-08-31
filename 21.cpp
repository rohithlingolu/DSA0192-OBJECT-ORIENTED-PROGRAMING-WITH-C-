#include<iostream>
using namespace std;

class myclass
{
	public:
	       int num;
		   myclass(int num)
		   {
		   	int rem,rev=0;
			   }	
		
		~myclass()
		{
			int rem,rev=0;
			while (num!=0)
			{
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;
			}
		cout <<"reverse of num ="<<rev;	
		
		}
};

int main()
{
	int num,rev;
	cout <<"enter a number";
	cin >>num;
	myclass obj(num);
	
}
