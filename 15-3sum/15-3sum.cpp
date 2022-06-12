class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            int l = i+1, r=n-1;
            if(i>0 and nums[i]==nums[i-1]) continue;
            while(l<r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum==0){
                    res.push_back({nums[i], nums[l], nums[r]});
                    while(l<r and nums[l]==nums[l+1]) l++;
                    while(r>l and nums[r]==nums[r-1]) r--;
                    l++;r--;
                }
                else if(sum>0){
                    r--;
                }
                else l++;
            }
        }
        return res;
    }
};