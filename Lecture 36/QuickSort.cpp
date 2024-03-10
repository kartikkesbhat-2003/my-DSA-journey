#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int s, int e)
{
    int pivot = v[s];

    int count = 0;
    for(int i = s+1; i<=e ; i++)
    {
        if(pivot > v[i])
            count++;
    }

    int pivotIndex = s + count;

    swap(v[s], v[pivotIndex]);

    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(pivot >= v[i])
        {
            i++;
        }

        while(pivot < v[j])
        {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex)
            swap(v[i++], v[j--]);
    }

    return pivotIndex;

}

void quickSort(vector<int> &v, int s, int e)
{
    // base case
    if(s>=e)
    {
        return;
    }

    // partition
    int p = partition(v, s, e);

    // left sort
    quickSort(v, s, p-1);

    // right sort
    quickSort(v, p+1, e);

}

int main() {
    vector<int> v = {1 , 5, 3, 24, 9, 7 , 0};
    int s = 0;
    int e = v.size()-1;
    cout<<"Given Vector is : ";
    for(auto x: v)
    {
        cout <<x<< " ";
    }
    cout<<endl;
    //sorting the array using recursion
    quickSort(v,s,e);
    cout<<"Sorted Vector is : ";
    for(auto y: v)
    {
        cout <<y<< " ";
    }
    cout<<endl;
    return 0;
}