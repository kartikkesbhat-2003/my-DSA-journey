#include<bits/stdc++.h>
using namespace std;


int selectionSort(int arr[], int n)
{
    for(int i=0 ; i<n-1;i++)
    {
        int minIndex = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<=arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int main()
{
    int selectionSort(int arr[], int n);
    int n = 5;
    int arr [] = { 64, 25, 12, 22, 11 };
    selectionSort(arr, n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


/*

[ 64  25  12  22  11 ]

Rount I  (  i = 0  )

64  |  25  |  12  |  22  |  11
 |___________________________|
 i=0      (swap)         min element

 Round II   ( i = 1 )


11  |  25  |  12  |  22  |  64
       |_______|
        (swap)

roundv III  ( i = 2 )

11  |  12  |  25  |  22  |  64
              |_______|
                (swap)

the final sortd array is  --->  [  11  12  22  25  64  ]


*/