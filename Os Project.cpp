#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n,r,resources;
	cout<<setfill('*');
	cout<<"\n\n\t"<<setw(65)<<" Welcome to Chef's Kitchen ";
	cout<<setw(40)<<'*'<<"\n\n";
	cout<<"\tEnter Number of Chefs :";
	cin>>n;
	cout<<"\n\n\t Enter total number of ingredients a chef can claim :";
	cin>>r;
	resources=(n*r)-(n-1);
	cout<<"\n\n\t Total number of ingredients required >= "<<resources; 
}
