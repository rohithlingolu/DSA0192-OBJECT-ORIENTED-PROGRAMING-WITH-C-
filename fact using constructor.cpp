#include <iostream>
using namespace std;
class myclass
{
	public:
		myclass(int n)
		{
			 int fact=1;
			 for(int i=1;i<=n;i++)
			 {
			 	fact=fact*i;
			 }
			 cout<<"the factorial of number is: "<<fact<<endl;
		} 
};
int main() 
{
	int fact=1,n;
	cout<<"ENter a number: ";
	
	cin>>n;
	myclass obj(n);
	return 0;
} 
