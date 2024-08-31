#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter a number:";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
	}
		if(n%i==0)
		{
			cout<<"It is not a prime number";
		}
		else
		{
			cout<<"It is a prime number";
		}
	return 0;
}
