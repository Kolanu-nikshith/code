/*
 * @lc app=leetcode id=1503 lang=cpp
 *
 * [1503] Last Moment Before All Ants Fall Out of a Plank
 */

// @lc code=start
class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
             int ans = 0;
        for(auto i: left)
            ans = max(ans,i);
        for(auto i: right)
            ans = max(ans, n-i);
        
        return ans;
    }
};
// @lc code=end

