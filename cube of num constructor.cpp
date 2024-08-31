#include<iostream>
using namespace std;

class myclass
{
	public:
		myclass(int num)
		{
			int cube;
			cube=num*num*num;
			
			cout <<"cube of num="<<cube;
		}
		
};

int main()
{
	int num,cube;
	cout <<"enter a number";
	cin >>num;
	myclass obj(num);
	return 0;
}
