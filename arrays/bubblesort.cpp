#include <bits/stdc++.h>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    int n = 6;
    int arr[] = {9, 8, 7, 6, 3, 1};
    bubbleSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}