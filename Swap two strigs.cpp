#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string sh,ch,temp;
	
	cout<<"Strings before swap :: "<<endl;
	cout<<"\n";
	cout<<"Enter first string : ";
	cin>>sh;

	cout<<"Enter second string : ";
	cin>>ch;

    temp=sh;
    sh=ch;
    ch=temp;
    
	cout<<"\n";
    cout<<"Strings after sorting :: "<<endl;
    cout<<"\n";
    
    cout<<"1 st string is :: "<<sh<<endl;
    cout<<"2 nd string is :: "<<ch;
    
	return 0;
}









