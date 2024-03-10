#include<bits\stdc++.h>

using namespace std;

void compress(string &str)
{
    string temp = "";

    int i = 0;

    while(i<str.length())
    {
        if(str[i] == str[i+1])
        {
            int count = 0;
            int j = i;
            for( ; str[j] == str[i];j++)
            {
                count++; 
            }
            temp.push_back(str[i]);
            temp.push_back(count + '0');
            i = j;
        }
        else{
            temp.push_back(str[i]);
            i++;
        }
    }

    str = temp;
}

int main()
{
    string s = "aabcccbbbbd";
    compress(s);
    cout<<s;
}