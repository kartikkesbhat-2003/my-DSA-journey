#include<bits\stdc++.h>

using namespace std;

void rotate(vector<vector<int>> &v)
{
    int row = v.size();

    for(int i = 0; i < row; i++)
    {
        for(int  j = 0;j < i ; j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }

    for(int i = 0 ;i<row; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }
}

int main()
{
    vector<vector<int>> v(5, vector<int>(5, 0));
    int count = 0;
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j< 5 ; j++)
        {
            v[i][j] = count;
            count++;
        }
    }

     cout<<"\nBefore rotation: \n"<<endl;

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j< 5 ; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    rotate(v);
    cout<<"\nAfter rotation: \n"<<endl;

    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j< 5 ; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}