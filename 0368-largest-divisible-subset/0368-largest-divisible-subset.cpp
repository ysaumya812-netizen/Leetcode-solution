class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};

        // Sort the array so that we can check divisibility in one direction
        sort(nums.begin(), nums.end());

        // dp[i] stores the size of the largest divisible subset ending at index i
        vector<int> dp(n, 1);
        // prev[i] stores the previous index in the subset to reconstruct the path
        vector<int> prev(n, -1);

        int maxLen = 1;
        int maxIndex = 0;

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                }
            }
            if (dp[i] > maxLen) {
                maxLen = dp[i];
                maxIndex = i;
            }
        }

        // Reconstruct the largest divisible subset
        vector<int> result;
        int curr = maxIndex;
        while (curr != -1) {
            result.push_back(nums[curr]);
            curr = prev[curr];
        }

        return result;
    }
};