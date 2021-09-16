// https://www.codechef.com/problems/MATXOR

#include<bits/stdc++.h>
using namespace std;
void solve_test_case()
{
    int n,m,k; cin>>n>>m>>k;
    int aux[n+m+1]={0};
    int prefix[n+m+1]={0};
    
    for(int row=1;row<=n;row++)
    {
        int L=row+1;
        int R=row+m;
        aux[L]+=1;
        aux[R+1]-=1;
    }
    for(int i=1;i<=n+m;i++)
    {
        prefix[i]=prefix[i-1] + aux[i];
    }
    int ans=0;
    for(int i=1;i<=n+m;i++)
    {
        if(prefix[i]%2==1)
        {
            ans^=i+k;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int t; cin>>t;
    while (t--)
    {
        solve_test_case(); 
        /* code */
    }
    
    return 0;
}