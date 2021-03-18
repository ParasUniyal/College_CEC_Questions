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
    int i,j,n,temp,index;

    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        index=i;
        temp=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<temp)
            {
                temp=arr[j];
                index=j;
            }
        }
        swap(&arr[i],&arr[index]);
    }

    display(arr,n);

    return 0;
}
