#include <bits/stdc++.h>

using namespace std;

void sort1(vector <int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        if(v.at(i) != 0)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(v.at(j-1) != 0 || j==0)
                {
                    v.at(j)=v.at(i); 
                    v.at(i)=0;
                    break;
                }
            }
        }
    }
}

vector<int> mergeSortedArr(vector<int> v1, vector<int> v2, int m, int n)
{
    sort1(v1);
    sort1(v2);
    int s1=0, s2=0;
    vector<int> v;
    int count = 0;
    while(s1 < m && s2 < n)
    {
        if(v1.at(s1) < v2.at(s2))
        {
            v.push_back(v1.at(s1++));
        }
        else
        {
            v.push_back(v2.at(s2++));
        }
    }

    while(s1<m)
    {
        v.push_back(v1.at(s1++));
    }

    while(s2<n)
    {
        v.push_back(v2.at(s2++));
    }

    return v;
}

void print(vector <int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
}

int main()
{
    int m = 4, n = 6;
    vector<int> v1;
    vector<int> v2;

    v1.push_back(1);
    v1.push_back(0);
    v1.push_back(3);
    v1.push_back(0);
    v1.push_back(8);
    v1.push_back(5);


    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(10);

    vector <int> ans = mergeSortedArr(v1 , v2, m, n);
    print(ans);

}