class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<(int)strs.size();i++)
        {
            string cur="";
            for(int j=0;j<min(prefix.size(),strs[i].size());j++)
            {
                if(strs[i][j]==prefix[j]) 
                {
                    // cur+=prefix[j];
                    cur.push_back(prefix[j]);
                    // cur=cur+prefix[j];
                    continue;
                }
                else break;
            }
            prefix=cur;
        }
        return prefix;
    }
};
