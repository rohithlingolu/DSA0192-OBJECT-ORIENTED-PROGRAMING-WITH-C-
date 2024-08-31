#include<iostream>
#include<string>
using namespace std;

class myclass
{
	public:
		myclass(string str)
		{
			int i,j,n;
			n=str.length();
			for (i=0;i<n;i++)
			
				for (j=n-1;i<j;j--)
				
				
					if (str[i]=str[j])
					{
					
						cout <<"pallindrome";
				}
					else
				{
						
						cout <<"not a pallindrome";
				}
		
		}
};

int main()
{
	int i,j;
	string str;
	cout <<"enter a string";
	cin >>str;
	
	myclass obj(str);
	
	return 0;
}
