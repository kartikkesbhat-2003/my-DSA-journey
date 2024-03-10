// https://leetcode.com/problems/move-zeroes/
#include<bits/stdc++.h>

using namespace std;

void moveZeros(int arr[],int m)
{
    int i=0;
    int k=0;
    for(int i = 0;i<m;i++)
    {
        if(arr[i] != 0 && i != k)
        {
            arr[k++] = arr[i];
            arr [i] = 0;
        }

        if(arr[i] != 0 && i == k)
        {
            k++; 
        }
    }
}

void print(int arr[], int m)
{
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {0 , 1 , 12 , 0, 3, 0 , 0 , 6, 0};

    moveZeros(arr, 9);
    print(arr, 9);


    return 0;
}