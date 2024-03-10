#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0)
    {
        if(n&1)
        {
            n=n>>1;
            i++;
        }
        else{
            ans=ans+pow(2,i);
            n=n>>1;
            i++;
        }
        
    }
    cout<<ans;
}