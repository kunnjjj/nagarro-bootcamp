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
        if(seive[i]==1) // this number is for sure prime
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
    int n; cin>>n;
    // cout<<is_prime(n)<<endl;
    int max_A=1e6+3;
    vector<int> sieve=make_sieve(max_A);

    vector<int> prefix(max_A+3);
    for(int i=1;i<=max_A;i++)
    {
        prefix[i]=prefix[i-1] + sieve[i];
    }
    while(n--)
    {
        int a,b; cin>>a>>b;
        cout<<prefix[b]-prefix[a-1]<<endl;
    }


    return 0;
}