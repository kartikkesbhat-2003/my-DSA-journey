// https://leetcode.com/problems/rotate-array/submissions/

#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int m)
{
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void rotateArr(int arr[], int n, int m)
{
    int temp [n];
    for(int i=0;i<n;i++)
    {
        temp[(i+m)%n]=arr[i];
    }

    print(temp,n);
}

int pivot(int nums[],int n)
    {
        int s = 0;
        int e = n-1;
        while(s <= e)
        {
            int mid = (e-s)/2;
            if(nums[mid] > nums[0])
            {
                s = mid + 1;
            }
            if(nums[mid] < nums[n-1])
            {
                e = mid;
            }
        }
        return e;
    }

int main()
{
    int arr[] = {0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 };
    rotateArr(arr, 10, 4);

    int p = pivot(arr, 10);
    cout<<"\n"<<p;

    return 0;
}