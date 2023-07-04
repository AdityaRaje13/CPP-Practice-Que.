#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j;
	cout<<"Enter no. of Rows :: ";
	cin>>r;
	cout<<"Enter no. of columns :: ";
	cin>>c;
	
	int arr[r][c];
	
	cout<<"Enter the matrix :: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	
	cout<<"\nThe matrix is :: "<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

