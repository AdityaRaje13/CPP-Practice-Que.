#include <iostream>
using namespace std;

int main()
{
	char n;
	cout<<"Enter any value to check"<<endl;
	cin>>n;
	
	if(n>=97 && n<=122)
	{
		cout<<"The given value is lowercase chracter"<<endl;
	}
	
	else if( n>=65 && n<=90)
	{
		cout<<"The value is uppercase letter"<<endl;
	}
	
	else if(n>=48 && n<=57)
	{
		cout<<"The value is number"<<endl;
	}
	
	else 
	{
		cout<<"Please enter correct value"<<endl;
	}
	return 0;
}
