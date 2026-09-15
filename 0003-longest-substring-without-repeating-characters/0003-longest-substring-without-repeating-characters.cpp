class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
    int left = 0, right = 0;   // sliding window pointers
    int maxLen = 0;
    set<char> window;          // store current characters

    while (right < n) {
        if (window.find(s[right]) == window.end()) {
            window.insert(s[right]);
            maxLen = max(maxLen, (int)window.size());
            right++;
        } else{
            window.erase(s[left]);
            left++;
        }
    }
    return maxLen;
    }
};