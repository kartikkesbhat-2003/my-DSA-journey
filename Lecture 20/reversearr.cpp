#include<iostream>
#include<bits/stdc++.h>

using namespace std;


vector <int> reverseVector(vector<int> v)
{
    int s = 0;
    int e = v.size()-1;
    while(s<=e)
    {
        swap(v.at(s),v.at(e));
        s++;
        e--;
    }
    return v;
}

void print (vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<"-";
    }
}

int main()
{
    vector<int > v;
    v.push_back(4);
    v.push_back(7);
    v.push_back(11);
    v.push_back(8);
    v.push_back(20);

    vector<int > ans = reverseVector(v);

    print(ans);
}