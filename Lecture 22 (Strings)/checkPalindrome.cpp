#include<bits/stdc++.h>
using namespace std;

int getLength(string str)
{
    int i=0;
    int count = 0;
    while(str[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

char toLowerCase(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;        
    }
}

bool isPalindrome(string str)
{
    int n = getLength(str);
    int s=0, e=n-1;
    while(s<e)
    {
        while(toLowerCase(str[s]) < '0' || toLowerCase(str[s]) > '9' && toLowerCase(str[s]) <'a' || toLowerCase(str[s]) > 'z')
        {
            s++;
        }
        while(toLowerCase(str[e]) < '0' || toLowerCase(str[e]) > '9' && toLowerCase(str[e]) <'a' || toLowerCase(str[e]) > 'z')
        {
            e--;
        }
        if(toLowerCase(str[s]) != toLowerCase(str[e]))
        {
            return false;
        }
        s++;
        e--;
    }

    return true;
}

void reverse(string str)
{
    int n = getLength(str);
    int s=0, e=n-1;
    while(s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
}



int main()
{
    string str;
    getline(cin, str);

    cout<<isPalindrome(str);


    return 0;
}