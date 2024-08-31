#include<iostream>
using namespace std;

class myclass
{
	public:
		myclass(int n)
		{
			int i,j;
			for (i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout <<"*";
				}
				cout <<endl;
			}
			
		}
};

int main()
{
	int n;
	cout <<"enter n value";
	cin >>n;
	myclass obj(n);
	
	return 0;
}
