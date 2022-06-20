class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0,i=0,n=nums.size();
        int sum=0, res=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            while(sum>=target) {
                res=min(res, i-j+1);
                sum-=nums[j++];
            }
        }
        return res==INT_MAX?0:res;
    }
};