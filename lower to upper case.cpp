#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[]="Engineering Discipline";
	cout<<"OriginalString:\n"<<arr<<endl;
	cout << "String in UPPERCASE:\n";
	for(int x=0;x<strlen(arr);x++)
	putchar(toupper(arr[x]));
	
	return 0;
	
}
