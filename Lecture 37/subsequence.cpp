#include <bits/stdc++.h>
using namespace std;

void solve(string &str, string output, int index, vector<string> &ans)
{
    // base case
    if(index >= str.size())
    {
		if(output.size() == 0)
		{
			return;
		}
        ans.push_back(output);
        return;
    }

    // excluded
    solve(str, output, index+1, ans);

    // include and solve
    int element = str[index];
    output.push_back(element);
    solve(str, output, index+1, ans);
}

vector<string> subsequences(string str){
		
	vector<string> ans;
    string output;
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main() 
{
    string str = "abc";

    vector<string> ans = subsequences(str);
    
    for (const string& str : ans) {
        cout << str << endl;
    }

}