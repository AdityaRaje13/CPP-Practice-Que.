#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> l;
	int i,n,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int a;
		cin>>a;
		l.push_back(a);
	}
	
	cout<<"List size :: "<<l.size()<<endl;
	cout<<"Front element :: "<<l.front()<<endl;
	cout<<"last element :: "<<l.back()<<endl;
	l.push_back(555);

    l.sort();
    cout<<"\nAfter sorting :: "<<endl;
    list<int> :: iterator it;
    for(it=l.begin();it!=l.end();it++)
    {
    	cout<<*it<<" ";
	}
     l.reverse();
    cout<<"\nAfter reversing :: "<<endl;
    list<int> :: iterator pt;
    for(pt=l.begin();pt!=l.end();pt++)
    {
    	cout<<*pt<<" ";
	}
    
    cout<<"\nEnter number to remove from array :: ";
    cin>>x;
	 l.remove(x);
    cout<<"\nAfter removing :: "<<endl;
    list<int> :: iterator tt;
    for(tt=l.begin();tt!=l.end();tt++)
    {
    	cout<<*tt<<" ";
	}
    
    
	return 0;
}
