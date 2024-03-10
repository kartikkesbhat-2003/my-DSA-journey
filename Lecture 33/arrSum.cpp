#include <bits/stdc++.h> 
using namespace std;
int arrSum(int arr[], int size) {
    if(size == 0)
    {
        return 0;
    }

    int ans = arrSum( arr+1 ,size-1) + arr[0];

    return ans;

}

int main()
{
    int arr[6] = { 1, 5 , 8 , 9 , 16, 112};

    cout<<arrSum(arr, 6);
}