class Solution
{
    public:
    unordered_map<int, int> m;
    int deleteAndEarn(vector<int> &nums)
    {
        int n = nums.size();
        int mn = 0;
        for (int i = 0; i < n; i++) {
            mn = max(nums[i], mn);
            m[nums[i]] = m[nums[i]]+nums[i];
        }
        vector<int> dp(mn+1, -1);
            return helper(0, mn, dp);
    }
    int helper(int i, int n, vector<int> &dp){
        if(i>n)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        
        return dp[i]=max(m[i]+helper(i+2, n, dp), helper( i+1, n, dp));
    }
};