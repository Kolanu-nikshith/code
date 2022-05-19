class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int dp[n];
        memset(dp, -1, sizeof(dp));
        return recursion(nums,dp, 0);
    
    }
    int recursion(vector<int> & nums,int dp[], int i){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(nums[i]+ recursion(nums,dp, i+2), recursion(nums,dp, i+1));
            
    }
    
};