#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char str[50];
	cout<<"Enter any string : ";
	cin>>str;
	int i=strlen(str);
	
	cout<<"The reversed string is : ";
	
    while(i>=0)
	{ 
	    i--;
		cout<<str[i];
	}
	return 0;
}
