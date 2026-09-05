class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size(),mx=nums[0];
        vector<long long> ans(n,0);
        ans[0]=nums[0]*2;
        for(int i=1;i<n;i++){
            mx=max(mx,nums[i]);
            ans[i]=nums[i]+mx+ans[i-1];
        }
        return ans;
    }
};