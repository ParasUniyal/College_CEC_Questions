#include<iostream>
using namespace std;
int main()
{
int i,j,k;
int n;
cin>>n;
	for(i=n;i>=1;i--)
	{
	for(j=n;j>i;j--)
	{
	cout<<" ";
	}
	for(k=1;k<=i;k++)
	{
	cout<<k;
	}
	cout<<"\n";
}
return 0;
}