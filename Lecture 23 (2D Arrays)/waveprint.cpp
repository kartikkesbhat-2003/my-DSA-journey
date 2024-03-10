#include<bits/stdc++.h>
using namespace std;

vector<int> waveprint(vector<vector<int>> v)
{
    vector<int> ans;

    int row = v.size();
    int col = v[0].size();
    
    for(int i = 0 ; i < col ; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0 ; j < col; j++)
            {
                int element = v[j][i];
                ans.push_back(element);
            }
        }
        else
        {
            for(int j = row - 1; j >= 0 ; j--)
            {
                int element = v[j][i];
                ans.push_back(element);
            }
        }
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

    vector<int> ans = waveprint(v);
    print(ans);

}