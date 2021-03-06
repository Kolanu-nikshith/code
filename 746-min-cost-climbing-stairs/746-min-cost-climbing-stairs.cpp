class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[cost.size()];
        int n =cost.size();
        // for(int i=2;i<n;i++){
        //     dp[i] = min(dp[i-2], dp[i-1])+cost[i];
        // }
        memset(dp, -1, sizeof(dp));
        return min(rec(cost, 0, dp), rec(cost, 1, dp));
        
        
    }
    int rec(vector<int> &cost, int i, int dp[]){
        if(i>=cost.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i] = cost[i]+min(rec(cost, i+1, dp), rec(cost, i+2, dp));
    }
};