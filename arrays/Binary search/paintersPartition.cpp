#include<bits/stdc++.h>
using namespace std;

bool isPossible(int boards[], int k, int mid)
{
    int painterCount = 1 ;
    int timeTaken = 0 ;
    int n=sizeof(boards);
    for(int i=0;i<n;i++)
    {
        if( (timeTaken + boards[i]) <= mid )
        {
            timeTaken = timeTaken + boards[i];
        }
        else
        {
            painterCount++;
            if(painterCount > k || boards[i] > mid)
            {
                return false;
            }
            timeTaken = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(int boards[], int k)
{
    int n=sizeof(boards);
    int start =0;
    int sum = 0;
    for ( int i=0 ;i< n; i++)
    {
        sum=sum+boards[i];
    }
    int ans= -1;
    int end=sum;
    int mid = start + (end-start)/2;

    while (start<=end)
    {
        if(isPossible(boards, k, mid))
        {
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid + 1;
        }
        int mid = start + (end-start)/2;
    }
    return ans;
}

int main() 
{
    bool isPossible(int boards[], int k, int mid);
    int findLargestMinDistance(int boards[], int k);
    int k = 2;
    int arr[] = { 5 , 5 , 5 , 5 };
    int a = findLargestMinDistance(arr, k);
    a = sizeof(arr);
    cout<<a;
}