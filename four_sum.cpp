class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
//         {0,1,2,3,4,5,6,7}
//         i,  (i+1,,,,,n-1)
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int s=j+1,e=n-1;
                while(s<e)
                {
                    if(nums[i] + nums[j] + nums[s] + nums[e]==target)
                    {
                        vector<int> ye_wala_is_good={nums[i],nums[j], nums[s] , nums[e]};
                        ans.push_back(ye_wala_is_good);
                        s++;
                        e--;
                        continue;
                    }
                    else if(nums[i] + nums[j] + nums[s] + nums[e]>target)
                    {
                        e--;
                    }
                    else
                    {
                        s++;
                    }
                }
            }
        }
//         [2,3,4,4,12,12] 5 + 4 + 12
//         {
            
//             2 + 3 + 4 + x= target
//                 x=12
//             {2,3,4,12}
//         }
        // set<data_type> 
        vector<vector<int>> new_ans;
        sort(ans.begin(),ans.end());
        if(ans.size()>0)
        new_ans.push_back(ans[0]);
        
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]==ans[i-1]) // vectors are being compared
            {
                
            }
            else
            {
                new_ans.push_back(ans[i]);
            }
        }
        // a->4
        // b->2
        // c_
        return new_ans;
        
    }
};
// algo:
// if mera array sorted hai

// iterate over i 0...
    
//     iterate j =i+1...
    
//          s=j+1,, e=n-1
    
//     A[i] + A[j] + A[s] + A[e]==target
//     s=s + 1
//     A[s] < S[s+1]
    
   
        
        // sort(nums.begin(),nums.begin()+4);
        
//         // [start, start + size)
//         A[0], A[1], A[2], A[3],A[4]
            
//             [0,4)
        
        
    
    