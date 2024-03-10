#include<bits/stdc++.h>
using namespace std; 

int binSearch(int *arr, int s,int e, int key)
{

    int mid = (s+e)/2;
    if(s == e && arr[mid]!=key)
        return -1;

    if(arr[mid] == key)
        return mid;

    if(arr[mid] > key)
        return binSearch(arr, s, mid-1, key);

    if(arr[mid] < key)
        return binSearch(arr, mid+1, e, key);
}

int main()
{
    int arr[6] = { 1, 5 , 8 , 9 , 16, 112};

    cout<<binSearch(arr, 0, 6, 113);
}