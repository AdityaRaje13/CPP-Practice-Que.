#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Enter the value of base : ";
	cin>>a;
	cout<<"Enter the value of power : ";
	cin>>b;
	
	pow(a,b);
	
	cout<<"The answer is : "<<pow(a,b);
}
