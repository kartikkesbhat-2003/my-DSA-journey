#include<bits/stdc++.h>
using namespace std;

int sizeOf(char ch[])
{
    int i=0;
    int count = 0;
    while(ch[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

bool ispalindrome(char ch[], int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(ch[s] != ch[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    cout<<ispalindrome(name, sizeOf(name));
    return 0;
}