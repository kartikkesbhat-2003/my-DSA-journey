#include<bits/stdc++.h>
using namespace std;

    void solve(string digits, string output, string mapping[], int index, vector<string> &ans)
    {
        // base case
        if(index >= digits.size())
        {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for(int i = 0; i < value.size(); i++)
        {
            output.push_back(value[i]);
            solve(digits,output,mapping, index + 1, ans);

            // backtracking after adding the string in ans
            output.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0)
        {
            return ans;
        }
        string output;
        int index = 0;

        // mapping the numbers to the letters
        string mapping[10] = {"", "" , "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

        solve(digits, output, mapping, index, ans);
        return ans;
    }

    int main() {
        string str = "23";
        vector<string> ans = letterCombinations(str);
    
        for (const string& str : ans) {
            cout << str << endl;
        }
    }
