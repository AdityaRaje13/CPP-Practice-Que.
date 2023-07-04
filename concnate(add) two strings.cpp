#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char sh[50],ch[50];
	cout<<"Enter any string : ";
	cin>>sh;

	cout<<"Enter any string : ";
	cin>>ch;

    cout<<strcat(sh,ch);
    
	return 0;
}
