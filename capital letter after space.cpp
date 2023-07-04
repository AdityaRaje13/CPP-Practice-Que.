#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char ch[50];
	cout<<"Enter any string : ";
	gets(ch);
	
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			ch[i+1]=toupper(ch[i+1]);
		}
	}
	
	cout<<ch;
	return 0;
}
