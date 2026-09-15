class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindrome
        if (x < 0) return false;
        // Numbers ending with 0 but not 0 itself are not palindrome
        if (x % 10 == 0 && x != 0) return false;

        long long int rev = 0, original = x;
        while (x > 0) {
            int num=x % 10;
            rev = rev * 10 + num;
            x /= 10;
        }

        return rev == original;
    }
};