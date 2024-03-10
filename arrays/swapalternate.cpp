#include<bits/stdc++.h>

using namespace std;

void swapAlternate(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
}

void printarr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    
    swapAlternate(arr,8);
    printarr(arr,8);
}