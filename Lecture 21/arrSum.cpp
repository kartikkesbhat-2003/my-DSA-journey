#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }

    return v;
}

vector<int > arrSum(vector<int > v1, vector<int > v2)
{
    vector<int> v;

    int i = v1.size()-1;
    int j = v2.size()-1;
    int sum , carry = 0 ;

    int k = 0;
    while (i>=0 && j>=0)
    {
        sum = v1[i] + v2[j] + carry;
        carry = sum/10;
        sum = sum %10;
        v.push_back(sum);
        i--;
        j--;
    }

    while(i >= 0)
    {
        sum = v1[i] + carry;
        carry = sum/10;
        sum = sum %10;
        v.push_back(sum);
        i--;
    }

    while(j >= 0)
    {
        sum = v2[j] + carry;
        carry = sum/10;
        sum = sum %10;
        v.push_back(sum);
        j--;
    }

    while(carry != 0)
    {
        sum = carry%10;
        carry = carry/10;
        v.push_back(sum);
    }

    return reverse(v);
}

void print (vector<int > v)
{
    for(int i =0 ; i<v.size(); i++)
    {
        cout<<v.at(i);
    }
}

int main()
{
    vector<int > v1;
    v1.push_back(4);
    v1.push_back(7);
    v1.push_back(1);
    v1.push_back(8);
    v1.push_back(2);

    vector<int > v2;
    v2.push_back(8);
    v2.push_back(5);
    v2.push_back(9);
    v2.push_back(8);
    v2.push_back(3);

    print(arrSum(v1,v2));
}