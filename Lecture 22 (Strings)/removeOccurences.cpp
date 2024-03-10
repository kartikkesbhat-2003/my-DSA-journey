#include<bits/stdc++.h>
using namespace std;

string removeOccurences(string str, string part)
{
    while(str.length() != 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part) , part.length());
    }
    return str;
}

int main()
{

    string str = "ababccababacacbab";
    string str2 = "abc";
    cout<<removeOccurences(str, str2);


    return 0;
}


// str.find(string) -> return the 1st index of the string from where the string is found
// str.erase(start , no of char to erase) -> erase the no of character from the given start of the string 