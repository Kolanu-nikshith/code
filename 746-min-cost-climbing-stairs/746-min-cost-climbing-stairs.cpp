class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==2){
            return min(cost[0], cost[1]);
        }
        vector<int> dp(cost.size(), -1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i=2;i<cost.size();i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        int n=cost.size();
        return min(dp[n-1], dp[n-2]);
        
        // return min(solve(cost.size()-1, cost, dp), solve(cost.size()-2, cost, dp));
    }
    
    int solve(int i, vector<int> &cost, vector<int> &dp){
        if(i==0) return cost[i];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int left = solve(i-1, cost, dp) + cost[i];
        int right = solve(i-2, cost, dp) + cost[i];
        return dp[i]=min(left, right);
    }
};