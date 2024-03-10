#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    getline(cin, str);
    int i=0;
    int s=0;
    int e=0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i+1] == '\0')
        {
            e = (str[i] == ' ') ? i-1 : i;
            while (s < e)
            {
                swap(str[s], str[e]);
                s++;
                e--;
            }
            s = i+1;
        }
        i++;
    }
    cout<<str;

    return 0;
}