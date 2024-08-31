#include<iostream>
using namespace std;

class myclass
{
	public:
		myclass(int num)
		{
			int rev=0,rem;
			while(num!=0)
			{
				rem=num%10;
				rev=rev*10+rem;
				num=num/10;
			}
			cout <<"reverse of number"<<rev;
		}
		
};

int main()
{
	int num;
	cout <<"enter a number";
	cin >>num;
	myclass obj(num);
	return 0;
	
}
