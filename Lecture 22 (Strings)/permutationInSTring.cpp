#include<bits\stdc++.h>

using namespace std;


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

bool checkEqual(int a[26], int b[26])\
{
    for(int i =0;i<26;i++)
    {
        if(a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string str1 , string str2)
{
    int count1[26] = {0};
    for(int i=0;i<str1.length();i++)
    {
        int index = toLowerCase(str1[i]) - 'a';
        count1[index]++;
    }

    int windowSize = str1.length();
    int count2[26] = {0};
    int i = 0;

    while(i<windowSize && i<str2.length())
    {
        int index = toLowerCase(str2[i]) - 'a';
        count2[index]++;
        i++;
    }

    if(checkEqual(count1,count2))
    {
        return true;
    }

    while(i<str2.length())
    {
        int index1 = toLowerCase(str2[i]) - 'a';
        count2[index1]++;
        int index2 = toLowerCase(str2[i-windowSize]) - 'a';
        count2[index2]--;
        if(checkEqual(count1,count2))
        {
            return true;
        }
        i++;
    }

    return false;
}




int main()
{
    string s1 = "acd";
    string s2 = "eidbcbda";
    
    cout<<checkInclusion(s1,s2);
}