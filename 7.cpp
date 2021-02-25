#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i,j,k;
	for(i=n;i>=1;i--)
	{
	for(j=n;j>i;j--)
	{
	cout<<" ";
	}
	for(k=1;k<=i;k++)
	{
	cout<<"*";
	}
	cout<<"\n";
}
return 0;
}