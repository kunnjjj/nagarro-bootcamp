#include<bits/stdc++.h>
using namespace std;
int func(vector<int> &A,int n)
{
    int old=0;
    for(int i=0;i<n;i++)
    {
        old+=(i+1) * A[i];
    }
    int mx_ans=old;
    cout<<"old ans: "<<old<<endl;
    for(int i=0;i<n;i++)
    {
        int to_sub=0;
        int shifts_done=0;
        for(int j=i+1;j<n;j++)
        {
            shifts_done++;
            to_sub+=A[j];
            int cur_ans=old-to_sub+ shifts_done * A[i];
            mx_ans=max(mx_ans,cur_ans);
            // prod++;
        }
        shifts_done=0;
        int to_add=0;
        for(int j=i-1;j>=0;j--)
        {
            shifts_done++;
            to_add+=A[j];
            int cur_ans=old + to_add - shifts_done * A[i];
            mx_ans=max(mx_ans,cur_ans);
        }
    }
    cout<<"final ans: ";
    return mx_ans;
    
}
int main()
{

    int n; cin>>n;
    vector<int> A(n);

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<func(A,n)<<endl;


    return 0;
}