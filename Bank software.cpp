#include<iostream>
using namespace std;

class bank
{
	protected :
		char acc_holder[50];
		int acc_number,choise;
		float balance;
		
	public :
		
		void getdetails()
		{
			cout<<"--------------------------------------------"<<endl;
			cout<<"    ** Account Holder Information **"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"\n";
			cout<<"Enter account holder's Name : ";
			cin>>acc_holder;
			cout<<"\n";
			cout<<"--------------------------------------------"<<endl;
			cout<<"     *** Welcome "<<acc_holder<<" ***"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"\n";
			cout<<"Enter your accout number please : ";
			cin>>acc_number;
			cout<<"--------------------------------------------"<<endl;
			cout<<"\n";
			cout<<"please select your account type :"<<endl;
			cout<<"1. Saving A/C\n2. Current A/C"<<endl;
			cout<<"Please select any one option : ";
			cin>>choise;
			cout<<"\n";
			
			switch(choise)
			{
				case 1:
				    cout<<"This is your saving account"<<endl;
				    cout<<"\n";
				    break;
				      
			    case 2:
				    cout<<"This is your current account"<<endl;
				    cout<<"\n";
			    	break;
			    	
			    default:
			    	cout<<"Please provide correct information ";
			}
			cout<<"--------------------------------------------"<<endl;
			cout<<"Enter your balance : ";
			cin>>balance;
	        cout<<"--------------------------------------------"<<endl;
		}
		
};

class transaction : public bank
{
	public :
		int choise2;
		float deposit,withdraw,final1,final2;
		
	void action()
	{
		cout<<"\n";
		cout<<"     *** How can we help you ? ***"<<endl;
		cout<<"\n";
		cout<<"1. Check your Balance ::"<<endl;
		cout<<"2. Deposit an amount ::"<<endl;
	   	cout<<"3. Withdraw an amount ::"<<endl;
	   	cout<<"4. Exit ::"<<endl;
	   	cout<<"\n";
	   	cout<<"--------------------------------------------"<<endl;
		cout<<"Please select any one option : ";
		cin>>choise2;
		cout<<"--------------------------------------------"<<endl;
		cout<<"\n";
		
		switch(choise2)
		{
			case 1:
				cout<<"Your account balance is : "<<balance<<" Rs only"<<endl;
				break;
				
			case 2:
				cout<<"Enter your amount to deposit : ";
				cin>>deposit;
				cout<<"Please wait ......"<<endl;
				final1 = balance + deposit;
				cout<<"\n";
				cout<<" "<<deposit<<" Rs deposited to your accout succesfully"<<endl;
			    break;
				
			case 3:
				cout<<"Enter your amount to withdraw : ";
				cin>>withdraw;
				if(withdraw>balance)
				{
					cout<<"You have insufficient balance "<<endl;
				}
				else
				{
				cout<<"Please wait ......"<<endl;
				cout<<"\n";
			    final2 = balance - withdraw;
				cout<<" "<<withdraw<<" Rs withdraw from your accout succesfully"<<endl;
			    }
				break;
			
			case 4:
			     
				exit(0);	
			
			default:
			    cout<<"Please provide correct information ";	
		}
    }
		void showdetails()
		{
			cout<<"\n \n";
			cout<<"--------------------------------------------"<<endl;
			cout<<"      ***** Account Details *****"<<endl;
			cout<<"--------------------------------------------"<<endl;
			cout<<"\n";
			cout<<"Account Holder : "<<acc_holder<<endl;
			cout<<"Account Number : "<<acc_number<<endl;
			
			if(choise2==1)
			{
			   cout<<"Your account balance is : "<<balance<<" Rs only"<<endl;
			}
			
		    if(choise2==2)
			{
			   cout<<"Your account balance is : "<<final1<<" Rs only"<<endl;	
			}
			
			 if(choise2==3)
			{
				if(withdraw>balance)
				{
					cout<<"You have insufficient balance "<<endl;
				}
				else
				{
			    cout<<"Your account balance is : "<<final2<<" Rs only"<<endl;
			    }
			}
			cout<<"\n";
			cout<<"--------------------------------------------"<<endl;
	        cout<<"      *** Thanks for visiting us ***"<<endl;
	        cout<<"--------------------------------------------"<<endl;
		}
	
};

int main()
{
	transaction t1;
	t1.getdetails();
	t1.action();
	t1.showdetails();
	
	return 0;
}

