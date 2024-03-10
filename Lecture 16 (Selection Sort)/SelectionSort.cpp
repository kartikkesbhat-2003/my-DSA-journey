#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    int arr[5] = {64 ,25 ,12 ,22 ,11};
    int n = 5;

    selectionSort(arr ,n);
    for(int i=0;i<n ;i++)
    {
        cout<<arr[i]<<"->";
    }
}