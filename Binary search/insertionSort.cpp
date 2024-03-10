#include <bits/stdc++.h>
#include <vector>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i-1; j >=0 ; j--)
        {
            bool swapped = false;
            if (temp < arr[j])
            {
                arr[j+1] = arr[j];
                swapped =true;
            }
            else if(temp >= arr[j])
            {
                break;
            }
            
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int n = 6;
    int arr[] = {9, 8, 7, 6, 3, 1};
    insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}