class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long totalSum = 0;
        vector<int> gains;
        for (int num : nums) {
            totalSum += num; 
            string s = to_string(num);
            sort(s.rbegin(), s.rend());
            int maxNum = stoi(s);
            gains.push_back(maxNum - num);
        }
        sort(gains.rbegin(), gains.rend());
        for (int i = 0; i < min(k, (int)gains.size()); i++) {
            if (gains[i] > 0) {
                totalSum += gains[i];
            }
        }
        
        return totalSum;
    }
};