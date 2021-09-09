// https://www.codechef.com/problems/PTUPLES 
// my sol:https://www.codechef.com/submit/PTUPLES

#include<bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
    if(n<=1) return false;
    if(n==2) return true;  // case left n=2
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2) // O(root n) 
    {
        if(n%i==0) return false;
    }
    return true;
    // if(n<=1) return false;
    // for(int i=2;i*i<=n;i++)
    // {
    //     if(n%i==0) return false;
    // }
    // return true;
}

vector<int> make_sieve(int max_A)
{
    vector<int> sieve(max_A+3,1);
    sieve[0]=0;
    sieve[1]=0;
    for(int i=4;i<=max_A;i+=2) sieve[i]=0;
    // for(int i=2;i<=max_A;i++)
    for(int i=3;i*i<=max_A;i+=2)
    {
        if(sieve[i]==1) // this number is for sure prime
        {
            // for(int j=2*i;j<=max_A;j+=i) 
            for(int j=i*i;j<=max_A;j+=i)
            {
                sieve[j]=0;
            }
        }
    }
    return sieve;
}
int main()
{
    int t; cin>>t;
    // cout<<is_prime(n)<<endl;
    int max_A=1e6+3;
    vector<int> sieve=make_sieve(max_A);

    vector<int> prefix(max_A+3);
    // for(int i=1;i<=max_A;i++)
    // {
    //     prefix[i]=prefix[i-1] + sieve[i];
    // }
    for(int i=3;i<=max_A;i++)
    {
        if(sieve[i] && sieve[i-2])
        {
            prefix[i]=1;
        }
    }
    for(int i=2;i<=max_A;i++)
    {
        prefix[i]=prefix[i-1] + prefix[i];
        // prefix[i]=prefix[i-1] + aux[i];
    }
    
    while(t--)
    {
        int N;
        cin>>N;
        cout<<prefix[N]<<endl;
    }
    // prime sieve
    // 2 prime numbers ka sum teesra nahi unless ek 1
    // prefix

    return 0;
}