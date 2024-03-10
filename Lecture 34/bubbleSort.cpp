#include<bits\stdc++.h>
using namespace std;

void sort(vector<int> &v,int n)
{
    if( n == 0)
    {
        return;
    }
    for(int i = 0 ; i<n-1 ; i++)
    {
        if(v[i] > v[i+1])
        {
            swap(v[i], v[i+1]);
        }
    }
    sort(v,n-1);
}

int main()
{
    vector<int> v = {1 , 5, 3, 24, 9, 7 , 0};
    int n = v.size();
    cout<<"Given Vector is : ";
    for(auto x: v)
    {
        cout <<x<< " ";
    }
    cout<<endl;
    //sorting the array using recursion
    sort(v,n);
    cout<<"Sorted Vector is : ";
    for(auto y: v)
    {
        cout <<y<< " ";
    }
    cout<<endl;
    return 0;
}