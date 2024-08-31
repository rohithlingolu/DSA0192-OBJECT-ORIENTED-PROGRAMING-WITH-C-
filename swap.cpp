#include <iostream>
using namespace std;
class myclass
{
	public:
		myclass(int x,int y,int c)
		{
			c=x;
			x=y;
			y=c;
			cout<<"the swap of number 1: "<<x<<endl;
			cout<<"the swap of number 2: "<<y<<endl;
		}
};
int main()
{
	int x,y,c;
	cout<<"Enter the number1: ";
	cin>>x;
	cout<<"Enter the number2: ";
	cin>>y;
	myclass obj(x,y,c);
	return 0;
}
