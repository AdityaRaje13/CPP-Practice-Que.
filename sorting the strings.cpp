#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n,i;
	cout<<"How many strings you want to sort : ";
	cin>>n;
	string str[n],temp;
	cout<<"\n";
	cout<<"Strings before sorting ::"<<endl;
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<"string : "<<i+1<< " :: ";
		cin>>str[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(str[i]>str[j])
			{
				temp=str[i];
				str[i]=str[j];
				str[j]=temp;
			}
		}
	}
	cout<<"\n";
	cout<<"Strings after sorting ::"<<endl;
	cout<<"\n";
	 
	 for(i=0;i<n;i++)
	 {
	 	cout<<str[i]<<endl;
	 }
	return 0;
}













