#include <iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter n : ";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
    	for(j=n;j<=1;j--)
    	{
    		cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
