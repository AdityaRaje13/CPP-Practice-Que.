#include<iostream>
#include<stdlib.h>
using namespace std;
void random(int);

int main()
{
	int n;
	cout<<"Enter how many random numbers you want : ";
	cin>>n;
	cout<<"\n";
	
	random(n);
	return 0;
}
	
	void random(int size)
  {
  	int x,i;
	cout<<"Your random numbers are : "<<endl;
	cout<<"\n";
	for(i=0; i<size; i++)
	{
		x=rand()%100;
		
		cout<<x<<" ";
	}
  }
