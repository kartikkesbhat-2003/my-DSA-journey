#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0)
    {
        if(n&1)
        {
            ans=ans+pow(2,i);
        }
        i++;
        n=n/10;
    }

    cout<<ans;
}