#include<iostream>
#include<stdbool.h>
using namespace std ;

int main()
{
    int n,temp;
	bool result=true;
	
	cout<<"Enter number to check binary : "<<endl;
	cin>>n;
	
	while(n>0)
	{
		temp = n%10;
		if(temp != 0 && temp != 1)
		{
			result = false;
			break;
		}
		
		n = n/10;
	}
	
     if(result)
	 {
	 	cout<<"The number is binary ";
	 	
	 }	
	 else 
	 {
	 	cout<<"The number is not binary ";
	 }
	 
	 return 0;
}

