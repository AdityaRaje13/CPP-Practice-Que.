#include<iostream>
using namespace std;

int main ()
{
	int n,arr[50],i;
	
	cout<<"Enter an array size :: ";
	cin>>n;
	cout<<"\n";
	cout<<"Enter the array :: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n";
	cout<<"The entered array is :: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	cout<<"\nThe reversed arry is :: "<<endl;
	for(i=n-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
















