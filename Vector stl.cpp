#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	cout<<"vector size = "<<v.size()<<endl;
	cout<<"random element = "<<v.at(3)<<endl;
	cout<<"first element = "<<v.front()<<endl;
	cout<<"last element = "<<v.back()<<endl;
    v.pop_back();
    cout<<"After pop back : ";
    for(int i=0;i<v.size();i++)
	{
	   cout<<v[i]<<" ";
	}
	
	v.push_back(1000);
	cout<<"\nAfter push back : ";
    for(int i=0;i<v.size();i++)
	{
	   cout<<v[i]<<" ";
	}
	
	v.clear();
	cout<<"\nAfter clear : ";
    for(int i=0;i<v.size();i++)
	{
	   cout<<v[i]<<" ";
	}
}

