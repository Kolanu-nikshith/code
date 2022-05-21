class Solution {
public:
    int helper(vector<int>& arr, int tar, int n, vector<vector<int>>& dp){
        if(n == 0 || tar == 0)
           return (tar == 0 )? dp[tar][n] = 0 : dp[tar][n] =1e9;
        if(dp[tar][n] != -1) return dp[tar][n];
        if(arr[n-1] > tar) return dp[tar][n] =helper(arr, tar, n-1, dp);
        else return dp[tar][n] = min(helper(arr, tar - arr[n-1], n, dp) + 1, helper(arr, tar, n-1, dp));
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(amount+1, vector<int>(n+1,-1));
        int ans = helper(coins, amount, n, dp);
        return ans == 1e9 ? -1 : ans; 
    }
};