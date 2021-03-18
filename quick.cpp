#include<bits/stdc++.h>
using namespace std;

void display(int a[],int n)
{
    int i;
    cout<<"Sorted array : ";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

void swapp(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int part(int a[],int l,int h)
{
    int pivot=a[h];
    int i=l-1;
    int j=l;
    for(j=l;j<=h-1;j++)
    {
            if(a[j]<pivot)
        {
                i++;
                swapp(&a[i],&a[j]);
            }}

    swapp(&a[i+1],&a[h]);
    return i+1;
}

void quickSort(int a[],int l,int h)
{
    if(l<h)
    {
        int p=part(a,l,h);
        quickSort(a,l,p-1);
        quickSort(a,p+1,h);
    }
}


int main()
{
    int i;
    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    int a[n];
    cout<<"Enter array elements : \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quickSort(a,0,n-1);
    display(a,n);
    return 0;
}
