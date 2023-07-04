#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char ch[50];
	int n,i,vow,dig,spc;
	
	cout<<"Enter any string : ";
    gets(ch);
    
    for(i=0;i<strlen(ch);i++)
    {
    	if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
    	{
		   vow++;
		}
		
		else if(ch[i]>='0' && ch[i]<='9')
		{
			dig++;
		}
		
		else if(ch[i]==' ')
		{
			spc++;
		}
		
	}
	
    cout<<"The number of vovels :: "<<vow<<endl;	
    cout<<"The number of digits :: "<<dig<<endl;	
    cout<<"The number of spaces :: "<<spc<<endl;	
	return 0;
}










