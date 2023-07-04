#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char c,ch[50];
	int count=0;
	
	cout<<"Enter a string :"<<endl;
	cin>>ch;
	
	cout<<"Enter number to check its repeatitions : ";
	cin>>c;
	
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==c)
		{
		count++;
	    }
	}
	
	if(count == 0)
	{
		cout<<"The character is not found ";
	}
	
	else
	{
		cout<<"The character is found "<<count<<" times .";
	}
	return 0;
}









