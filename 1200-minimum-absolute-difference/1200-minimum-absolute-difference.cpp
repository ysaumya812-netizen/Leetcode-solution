class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());
        
        int min_diff = INT_MAX;
        vector<vector<int>> result;
        
        // Step 2: Find the minimum absolute difference between adjacent elements
        for (int i = 0; i < arr.size() - 1; ++i) {
            int diff = arr[i + 1] - arr[i];
            if (diff < min_diff) {
                min_diff = diff;
                result.clear(); // Reset result if a smaller difference is found
                result.push_back({arr[i], arr[i + 1]});
            } else if (diff == min_diff) {
                result.push_back({arr[i], arr[i + 1]});
            }
        }
        
        return result;
    }
};