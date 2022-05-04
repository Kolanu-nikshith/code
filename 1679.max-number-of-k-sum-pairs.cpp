/*
 * @lc app=leetcode id=1679 lang=cpp
 *
 * [1679] Max Number of K-Sum Pairs
 */

// @lc code=start
class Solution {
public:
        int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freq;int res=0;
        for(int i=0;i<nums.size();i++){
            int c = k - nums[i];
            if(freq[c]>0) {
                res++;
                freq[c]--;            
            }
            else
                freq[nums[i]]++;
        }
        return res;
        
    }
};
// @lc code=end

