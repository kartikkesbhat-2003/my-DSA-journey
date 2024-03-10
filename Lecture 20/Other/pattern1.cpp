#include <iostream>
using namespace std;
int main()
{
    int ap(int );
    int setbits(int );
    int fibonaci(int );
    int a=3;
    
    cout<<fibonaci(5);
}

int ap(int a)
{
    int ans=3*a+7;
    return ans;
}

int setbits(int a)
{
    int ans=0;
    while(a!=0)
    {
        if(a&1)
        {
            ans++;
        }
        a=a>>1;
    }
    return ans;
}

int fibonaci(int n)
{
    int a=0;
    int b=1;
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    for(int i=0;i<=n-3;i++)
    {
        int next=a+b;
        a=b;
        b=next;
    }
    return b;
}



