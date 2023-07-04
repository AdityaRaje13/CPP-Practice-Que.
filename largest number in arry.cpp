#include<iostream>
using namespace std;

int main()
{
	int arr[50],n,i,max;
	cout<<"Enter size of an array :: ";
	cin>>n;
	cout<<"\n";
	cout<<"Enter an array :: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n";
	cout<<"The stored array is :: "<<endl;
	for(i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
	     	max=arr[i];
	    }
	}
	cout<<"\n";
	cout<<"\nThe largest number is :: "<<max;
	return 0;
}
