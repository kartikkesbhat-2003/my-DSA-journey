#include<bits\stdc++.h>
using namespace std;

long long exponant(int n, int m)
{
    if(m == 0)
        return 1;
    if(m == 1)
        return n;

    if(m %2 == 0)
        return (exponant(n, m/2)* exponant(n, m/2));
    else
        return ( n * exponant(n, m/2)* exponant(n, m/2));
}

int main()
{
    int n = 2;
    int m = 20;
    cout<<exponant(n, m);
}