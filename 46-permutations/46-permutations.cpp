class Solution
{
    public:
        vector<vector < int>> permute(vector<int> &nums)
        {
            vector<vector < int>> ans;
            int currIndex=0;
            backtrack(currIndex, nums, ans);
            return ans;
        }
    void backtrack(int currIndex,  vector<int> &nums, vector<vector<int>> &ans)
    {
        if (currIndex >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=currIndex;i<nums.size();i++){
            swap(nums[i], nums[currIndex]);
            backtrack(currIndex+1, nums, ans);
            swap(nums[i], nums[currIndex]);
        }
        
    }
};