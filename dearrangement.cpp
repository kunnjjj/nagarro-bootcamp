#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n; cin>>n;

    vector<int> dp(n+3);
    dp[1]=0;
    dp[2]=1;
    for(int i=3;i<=n;i++)
    {
        dp[i]=(i-1) * (dp[i-1]+ dp[i-2]);
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i<<": "<<dp[i]<<endl;
    }
    // homework
    // max_prime[i]=maximum prime number which is <=i
    // fib[i]=fib[i-1] + fib[i-2]
    return 0;
}