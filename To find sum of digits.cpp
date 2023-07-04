#include<iostream>
using namespace std;

int main()
{
	long int x;
    int ans=0,a;
		
	cout<<"Enter number to sum its digits : ";
	cin>>x;
	
	 while(x>0)
	 {
	 	a=x%10;
	 	ans=ans+a;
	 	x=x/10;
	 }
	 
	 cout<<"The sum of digits is : "<<ans;
	 
	 return 0;
}
