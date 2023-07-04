#include<iostream>
using namespace std;
void hcf(int ,int);

int main()
{
	int a,b;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Enter value of b : ";
	cin>>b;
	
	hcf(a,b);
	
	return 0;
}

void hcf(int m,int n)
{
	while(m!=n)
	{
	    if(m>n)
		{
			m=m-n;
		}	
		else
		{
			n=n-m;
		}
	}
	
	cout<<"The highest common factor is : "<<m<<endl;
	
}

