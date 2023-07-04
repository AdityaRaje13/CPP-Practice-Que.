#include<iostream>
using namespace std;

int main()
{
	int days;
	float years,weeks;
	
	cout<<"Enter days to convert : ";
	cin>>days;
	
	years = days / 365;
	weeks = days / 7; 
	days = days % 365;
	days = days % 7;
	
	cout<<"No of years : "<<years<<endl;
	cout<<"No of weeks : "<<weeks<<endl;
	cout<<"No of days : "<<days<<endl;
	
	
	return 0;
}
