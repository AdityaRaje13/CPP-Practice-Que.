#include <iostream>
using namespace std;

int main()
{
	int n,i=1,sum=0;
	cout<<"Enter the how many values want to sum : ";
	cin>>n;
	
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	
	cout<<"The sum is : "<<sum;
	
	return 0;
}
