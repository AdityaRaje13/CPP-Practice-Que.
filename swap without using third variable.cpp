#include<iostream>
using namespace std;
void swap(int x,int y);

int main()
{
	int a,b;
	
	cout<<"The value of a :: ";
	cin>>a;
	cout<<"The value of b :: ";
	cin>>b;
	cout<<"\n";
	cout<<"*** The numbers before swap ***"<<endl;
	cout<<" a = "<<a <<" b = "<<b<<endl;
	
	swap(a,b);
	
	return 0;
}

void swap(int x,int y)
{
	x= x+y;
	y= x-y;
	x= x-y;
	
	cout<<"\n";
	cout<<"*** The numbers after swap ***"<<endl;
	cout<<" a = "<<x <<" b = "<<y<<endl;
}
































