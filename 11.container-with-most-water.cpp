/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0, e = height.size()-1;
        int ans=0;
        while(s<e){
            int area = min(height[s], height[e]) * abs(e-s);
            if(area>ans){
                ans = area;
            } 
            if(height[s] <= height[e]) s++;
            else e--;
        }
        return ans;
        
    }
};
// @lc code=end

