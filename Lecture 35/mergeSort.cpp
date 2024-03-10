#include<bits\stdc++.h>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e- mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int  k = s;
    for(int i = 0;i < len1 ;i++)
    {
        first[i] = arr[k++];
    }

    int  k = mid+1;

    for(int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }
}

void sort(vector<int> &v, int s, int e)
{
    if(s>e)
        return;

    int mid = s + (e-s)/2;
    sort(v,s,mid);
    sort(v,mid+1,e);

    merge(v, s,e);
}

int main()
{

}