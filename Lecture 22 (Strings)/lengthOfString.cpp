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

int main()
{
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;

    cout<<sizeOf(name);

    return 0;
}