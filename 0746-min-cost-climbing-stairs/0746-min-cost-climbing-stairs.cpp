class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        // vector<int>dp(n+2,-1);
        int prev1=0;
        int prev=0;
        int curr;
        for(int i=2;i<=n;i++){
            curr=min((cost[i-1]+prev),(cost[i-2]+prev1));
            prev1=prev;
            prev=curr;
        }
        return curr;
    }
};