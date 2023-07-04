#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter a charecter : ";
	cin>>ch;
	
	if(ch>=65 && ch<=90)
	{
		cout<<"The entered character is uppercase character.";
	}
	
	else if(ch>=33 && ch<=47)
	{
		cout<<"The entered character is symbol.";
	}
	
	else if(ch>=97 && ch<=122)
	{
		cout<<"The entered character is lowercase character.";
	}
	
    else if(ch>=48 && ch<=57)
	{
		cout<<"The entered character is number";
		
	}	
	
	return 0;
}













