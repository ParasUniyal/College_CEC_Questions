#include<iostream>
using namespace std;

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
    int i,j,n,temp;

    cout<<"Enter size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;

        while(arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }

    display(arr,n);

    return 0;
}
