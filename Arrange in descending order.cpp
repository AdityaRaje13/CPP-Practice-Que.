#include<iostream>
using namespace std;

int main()
{
	int i,j,n,arr[50],temp;
	
	cout<<"Enter an arry size :: ";
	cin>>n;
	
	cout<<"Enter the array :: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"The entered array is :: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
			   temp=arr[i];
			   arr[i]=arr[j];
			   arr[j]=temp;
			}
		}
	}
	
	cout<<"\nThe ascending array is :: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

