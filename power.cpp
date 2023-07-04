#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x,n,ans;
	
	cout<<"enter value of base x : ";
	cin>>x;
	cout<<"enter value of power n : ";
	cin>>n;
	
	ans=pow(x,n);
	
	cout<<"The "<<n<<" power to the base "<<x<<" is "<<ans<<endl;
	
	return 0;
}
