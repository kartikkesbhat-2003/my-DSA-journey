#include<bits\stdc++.h>

using namespace std;

int countPrime(int n)
{
    int count = 0;
    vector<bool> prime(n+1, true);

    prime[0] = prime[1] = false;

    for(int i = 2; i < n ; i++)
    {
        if(prime[i])
        {
            count++;
            for(int j = i*2; j < n ; j=j+i)
            {
                prime[j] = false;
            }
        }
    }

    return count;
}

int main()
{

    int n;
    cin>>n;
    cout<<"\n\n--->  "<<countPrime(n);

}