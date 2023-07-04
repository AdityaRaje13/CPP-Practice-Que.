#include<iostream>
using namespace std;

int main()
{
	int n,d,rem[50],i,j;
	
	cout<<"Enter a number to convert : ";
	cin>>n;
	
	for(i=1;n!=1;++i)
	{
		d = n % 2;
		rem[i]= d;
		n = n / 2;
	}
	
	for(j=i-1;j>0;--j)
	cout<<rem[j];
	
	return 0;
}
