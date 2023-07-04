#include<iostream>
using namespace std;

class number
{
	public :
		int a,b;

		void getnum()
		{
			cout<<"Enter a & b : ";
			cin>>a>>b;
		}
		
		void shownum()
		{
			cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
		}
};

class calculation : public number
{

	public :
		
		void calc()
		{
			
			cout<<"Adition = "<<a+b<<endl;
			cout<<"subtraction = "<<a-b<<endl;
			cout<<"multiplication = "<<a*b<<endl;
		}
};

int main()
{
	calculation c1;
	c1.getnum();
	c1.shownum();
	c1.calc();
	return 0;
}














