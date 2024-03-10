#include <bits/stdc++.h> 
using namespace std;
bool search(int arr[], int size, int key) {
    if(size == 0)
    {
        return false;
    }

    if(arr[0] == key)
    {
        return true;
    }

    return search(arr+1, size -1, key);

}

int main()
{
    int arr[6] = { 1, 5 , 8 , 9 , 16, 112};

    cout<<search(arr, 6, 2);
}