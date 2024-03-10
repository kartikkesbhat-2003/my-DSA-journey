#include <bits/stdc++.h> 
using namespace std;
bool isSorted(int arr[], int size) {
    if(size <= 1)
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }

    else{
        return isSorted(arr+1, size-1);
    }

}

int main()
{
    int arr[6] = { 1, 5 , 8 , 9 , 16, 112};

    cout<<isSorted(arr, 6);
}