#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long int ans=0;
    int i=0;
    while(n!=0)
    {
       
        int r=n & 1;
        ans=ans+r*pow(10,i);
        n=n>>1;
        i++;
    }
    cout<<ans;
}