#include<bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> &v)
{
    int row = v.size();
    int col = v[0].size();

    int startrow = 0;
    int startcol = 0;
    int endrow  =row - 1;
    int endcol = col - 1;

    int total = row * col;
    int count = 0;

    vector<int> ans;

    while(count<total)
    {
        for(int i = startcol ; i <= endcol && count < total ; i++)
        {
            ans.push_back(v[startrow][i]);
            count++;
        }
        startrow++;

        for(int i = startrow ; i <= endrow && count < total ; i++)
        {
            ans.push_back(v[i][endcol]);
            count++;
        }
        endcol--;

        for(int i = endcol ; i >= startcol && count < total ; i--)
        {
            ans.push_back(v[endrow][i]);
            count++;
        }
        endrow--;

        for(int i = endrow ; i >= startrow && count < total ; i--)
        {
            ans.push_back(v[i][endcol]);
            count++;
        }
        startcol++;
    }

    return ans;
}

void print(vector<int> &v)
{
    int n = v.size();

    for(int i = 0 ; i < n ; i++)
    {
        cout<<v.at(i)<<" ";
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

    vector<int> ans = spiral(v);
    print(ans);

}