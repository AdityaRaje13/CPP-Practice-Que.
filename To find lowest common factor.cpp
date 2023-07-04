#include<iostream>
using namespace std;
void lcm(int ,int);

int main()
{
	int a,b;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Enter value of b : ";
	cin>>b;
	
	lcm(a,b);
	
	return 0;
}

void lcm(int a,int b)
{
	int m,n;
	
	m=a;
	n=b;
	while(m!=n)
	{
	    if(m<n)
		{
			m=m+a;
		}	
		else
		{
			n=n+b;
		}
	}
	
	cout<<"The Lowest common factor is : "<<m<<endl;
	
}
