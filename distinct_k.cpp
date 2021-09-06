

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        // int n; cin>>n
        const int n=nums.size();
        vector<int> dp(n,(1000000));
        dp[n-1]=0;
        for(int i=n-2;i>=0;i--)
        {
            int me=nums[i];
            for(int s=1;s<=me;s++)
            {
                if(s+i>=n) break;
                dp[i]=min(dp[i],1 + dp[s+i]);
                
            }
        }
        return dp[0];
    }
};

bool is_safe(vector<int> &freq, int k)
{
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            cnt++;
    }
    // if(cnt<=k) return true;
    // return false;
    return cnt <= k;
}
int distinct_k(string &s, int k)
{
    int n = s.size();
    int i = 0;
    int ans = 0;
    vector<int> freq(26, 0);
    for (int j = 0; j < n; j++)
    {
        freq[s[j] - 'a']++;
        while (1)
        {
            if (is_safe(freq, k))
            {
                break;
            }
            freq[s[i] - 'a']--;
            i++;
        }
        ans = max(ans, j - i + 1);
    }
    return ans;
    // O(A * N) A=26
    // 2* N * 26 =
    // time  : O(N* A)
    // space : O(A)
}
int original_ques(string &s, int k)
{
    int n = s.size();
    int ans = 0;
    // n=5, k=10
    // len=5
    for (int len = min(n, k); len <= n; len++)
    {
        bool good = true;
        for (int i = 0; i < n; i++)
        {
            if (i + len <= n)
            {
                // do work
                string cur = s.substr(i, len);
                vector<int> freq(26, 0);
                for (char c : cur)
                    freq[c - 'a']++;
                if (is_safe(freq, k))
                {
                }
                else
                {
                    // we are not
                    good = false;
                    break;
                }
            }
            else
            {
                break;
            }
            if (good == false)
                break;
        }
        if (good == false)
            break;
        ans = len;
    }
    return ans;
}
int optimised_1(string &s, int k)

{
    int n = s.size();
    int ans = 0;
    // n=5, k=10
    // len=5

    // for (int len = min(n, k); len <= n; len++)
    int low=1,high=n;
    int len;
    while(low<=high)// logN
    {
        len=(low+high)/2;
        bool good = true;
        for (int i = 0; i < n; i++) // N
        {
            if (i + len <= n)
            {
                // do work
                string cur = s.substr(i, len); // N
                vector<int> freq(26, 0);
                for (char c : cur)
                    freq[c - 'a']++;
                if (is_safe(freq, k))
                {
                }
                else
                {
                    // we are not
                    good = false;
                    break;
                }
            }
            else
            {
                break;
            }
            if (good == false)
                break;
        }
        if(good==true)
        {
            ans = len;
            low=len+1;
        }
        else
        {
            high=len-1;
        }
    }
    return ans;
}
int optimised_2(string &s,int k)

{
    int n = s.size();
    int ans = 0;
    int low=1,high=n;
    int len;
    vector<vector<int>> a2Dfreq(n,vector<int> (26,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
        {
            a2Dfreq[i][j]=(i-1>=0?a2Dfreq[i-1][j]:0);
        }
        a2Dfreq[i][s[i]-'a']++;
    }
    while(low<=high)// logN
    {
        len=(low+high)/2;
        bool good = true;
        for (int i = 0; i < n; i++) // N
        {
            if (i + len <= n)
            {
                // do work
                int L=i;
                int R=i+len-1;
                vector<int> freq(26,0);   // O(A)
                for(int c=0;c<26;c++)
                {
                    freq[c]=a2Dfreq[R][c]-(L-1>=0?a2Dfreq[L-1][c]:0);
                }
                if (is_safe(freq, k))
                {
                }
                else
                {
                    // we are not
                    good = false;
                    break;
                }
            }
            else
            {
                break;
            }
            if (good == false)
                break;
        }
        if(good==true)
        {
            ans = len;
            low=len+1;
        }
        else
        {
            high=len-1;
        }
    }
    // n=input.size()
    // time  : O(nlogn * A)
    // space : O(n * A)
    return ans;
}
int main()
{

    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << distinct_k(s, k) << endl;
    cout << original_ques(s, k) << endl;
    cout<<optimised_1(s,k)<<endl;
    cout<<optimised_2(s,k)<<endl;

    return 0;
}
