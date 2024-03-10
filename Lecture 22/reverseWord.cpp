#include<bits/stdc++.h>
using namespace std;

void reverseWord(string &str, int s, int e)
{
    while(s<e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
}

void reversestring(string &str)
{
    int i=0;
    int s=0;
    int e=0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i+1] == '\0')
        {
            e = (str[i] == ' ') ? i-1 : i;
            reverseWord(str , s, e);
            s = i+1;
        }
        i++;
    }
}

int main()
{
    string str;
    cin>>str;
    reversestring(str);
    cout<<str;
    


    return 0;
}