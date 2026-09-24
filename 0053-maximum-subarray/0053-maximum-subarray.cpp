class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long int maxsum=INT_MIN;
        long long int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }      
        }
        return maxsum;
    }
};