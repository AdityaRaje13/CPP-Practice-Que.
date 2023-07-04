#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char sh[50],ch[50];
	cout<<"Enter any string : ";
	cin>>sh;
	
	strcpy(ch,sh);
	
	cout<<ch;
	return 0;
}
