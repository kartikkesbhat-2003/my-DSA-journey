#include<bits/stdc++.h>
using namespace std;

void reverse(char ch[], int n)
{
    int s=0, e=n-1;
    while(s<e)
    {
        swap(ch[s++],ch[e--]);
    }
}

int getLength(char ch[])
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

int main()
{
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;

    cout<<getLength(name);
    reverse(name, getLength(name));
    cout<<name;

    return 0;
}