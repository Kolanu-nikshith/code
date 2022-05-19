class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> v1(nums.begin(), nums.end()-1);
        vector<int> v2(nums.begin()+1, nums.end());
        vector<int> dp1(nums.size()-1, -1);
        vector<int> dp2(nums.size()-1, -1);
        
        return max(rec(v1,0,dp1), rec(v2,0, dp2));        
    }
    int rec(vector<int> &num, int i,vector<int> &dp ){
        if(i>=num.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        return dp[i]=max(rec(num, i+1, dp), num[i]+rec(num, i+2, dp));
    }
};