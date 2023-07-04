#include<iostream>
using namespace std;

int main()
{
	int n,temp=0;
	
	cout<<"Enter how many numbers of sum you want : ";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		temp = temp + i;
		
	}
	
	cout<<"The sum is : "<<temp;
	
	return 0;
}
