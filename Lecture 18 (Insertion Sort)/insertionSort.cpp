#include<bits/stdc++.h>
#include<iostream>

using namespace std;


void insertionSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];

        int j = i-1;
        while(j>=0)
        {
            if(temp < arr[j])
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j+1] = temp;
    }
}



int main()
{
    int arr[5] = {64 ,25 ,12 ,22 ,11};
    int n = 5;

    insertionSort(arr ,n);
    
    for(int i=0;i<n ;i++)
    {
        cout<<arr[i]<<"->";
    }
}