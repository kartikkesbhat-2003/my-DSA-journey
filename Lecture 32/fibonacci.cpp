#include<bits\stdc++.h>
using namespace std;

int fib(int n)
{
    if(n == 0)
    {
        return 1;
    }
    if(n == 1)
    {
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);
    return ans;

    return ans;
}
int main()
{
    cout<<fib(9);
}