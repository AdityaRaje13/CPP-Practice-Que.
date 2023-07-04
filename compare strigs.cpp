#include<iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;

int main()
{
	char ch[50],sh[50];
	bool result=false;
	cout<<"Enter first string :: "<<endl;
	cin>>ch;
	
	cout<<"Enter second string :: "<<endl;
	cin>>sh;
	
	for(int i=0;ch[i]!='\0' && sh[i]!='\0';i++)
	{
		if(ch[i]==sh[i])
		{
			result=true;
		}
	}
	
	if(result==true)
	{
		cout<<"Strins are equal";
    }
    
    else
    {	
		cout<<"Strins are not equal";
	}
	return 0;
}















