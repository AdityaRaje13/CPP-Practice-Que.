#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char ch[50];
	int count=0;
	
	cout<<"Enter a string :"<<endl;
	cin>>ch;
	
	for(int i=0;ch[i]!='\0';i++)
	{
		count++;
	}
	
	cout<<"The length of string is : "<<count;
	return 0;
}
