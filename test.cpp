#include<iostream>
using namespace std;

int main ()
{
   int n,arr[50],i;

   cout<<"Enter array size :: ";
   cin>>n;
   
   cout<<"Enter aarray :: "<<endl;
   for(i=0;i<n;i++)
   {
      cin>>arr[i];   	
   }  
   
   cout<<"\nThe array is :: "<<endl;
   
   for(i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";   	
   }  
   
  int p;
  cout<<"\nEnter position to delete number :: ";
  cin>>p;
  
  for(i=0;i<n;i++)
  {
  	--p;
      if(i==p)
      {
         arr[p]=arr[p+1];        	
	  }
  }
 
 cout<<"\nThe new array is :: "<<endl;
	
   for(i=0;i<n-1;i++)
   {
      cout<<arr[i]<<" ";   	
   }  
  
  return 0;
}


