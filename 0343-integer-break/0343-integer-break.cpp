class Solution {
public:
    int integerBreak(int n) {
        // Base cases for small values of n
        if (n == 2) return 1;
        if (n == 3) return 2;
        
        int product = 1;
        while (n > 4) {
            product *= 3;
            n -= 3;
        }
        // Multiply the remaining part (n will be 2, 3, or 4)
        return product * n;
    }
};