class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        
        int prev = max(nums[0],nums[1]);
        int prev2=nums[0];
        int curr=prev;
        for(int i=2;i<nums.size();i++){
            curr=max(nums[i]+prev2,prev);
            prev2=prev;
            prev=curr;
        }
        return curr;
    }
};