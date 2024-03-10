#include<bits\stdc++.h>

using namespace std;

void remove(string &str)
{
    string temp = "";

    int i = 0;

    while(i<str.length())
    {
        if(str[i] == str[i+1])
        {
            int count = 0;
            for(int j = i; str[j] == str[i];j++)
            {
                count++;
            }
            str.erase(i,count);
            i--;
        }
        else{
            i++;
        }
    }
}
int main()
{
    string s = "axxtyazzay";
    remove(s);
    cout<<s;
}