#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,r,resources;
	cout<<setfill('*');
	cout<<"\n\n\t"<<setw(65)<<" Welcome to Chef's Kitchen ";
	cout<<setw(40)<<'*'<<"\n\n";
	cout<<"\t Enter Number of Chefs :";
	cin>>n;
	cout<<"\n\n\t Enter total number of ingredients a chef can claim :";
	cin>>r;
	if(n>0 && r>0)
	{
		resources=(n*r)-(n-1);
        	cout<<"\n\n\t Total number of ingredients required >= "<<resources;
    	}
    	else if(n<=0)
    	{
    		cout<<"\n\n\t Total number of Chefs must be greater than 0"; 
    	}
    	else
    	{
    		cout<<"\n\n\t Deadlock will not occur even if we have no ingredients."; 
    	}
}
