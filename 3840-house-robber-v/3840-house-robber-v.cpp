class Solution {
public:
    long long rob(vector<int>& nums, vector<int>& colors) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        // rob_curr: max money ending with robbing the current house
        // skip_curr: max money ending with skipping the current house
        long long rob_prev = nums[0];
        long long skip_prev = 0;

        for (int i = 1; i < n; ++i) {
            long long rob_curr = nums[i] + skip_prev; // default: can only follow a skipped house

            // If colors are different, we are also allowed to follow a robbed house
            if (colors[i] != colors[i - 1]) {
                rob_curr = max(rob_curr, nums[i] + rob_prev);
            }

            long long skip_curr = max(rob_prev, skip_prev);

            // Move to next state
            rob_prev = rob_curr;
            skip_prev = skip_curr;
        }

        return max(rob_prev, skip_prev);
    }
};