#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void display(int ar[] , int m)
{
    cout<<"Sorted array : ";
    for(int i=0;i<m;i++)
    {
        cout<<ar[i]<<" ";
    }
}
int main()
{
    int i,j,n;

    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    display(arr,n);

    return 0;
}
