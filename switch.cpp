#include<iostream>
using namespace std;

int main()
{
   int choise;

    cout<<"please select your account type :"<<endl;
	cout<<"1. Saving A/C \n 2.Current \n3.exitA/C"<<endl;
	cin>>choise;
	
switch(choise)
			{
				case 1:
				    cout<<"This your saving account"<<endl;
				    break;
				      
			    case 2:
				    cout<<"This your current account"<<endl;
			    	break;
			    
				case 3:
			     
				 exit(0);	
					
			    default:
			    	cout<<"Please provide correct information ";
			}
	
	return 0;
			
}
