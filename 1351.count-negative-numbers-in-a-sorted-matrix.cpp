/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();int res=0;
        for(int i=0;i<n;i++){
            int c=0; int l=0, h=grid[i].size()-1;
            while(l<=h){
                int mid =  l+ ((h-l)/2);
                if(grid[i][mid] < 0) {h = mid-1;}
                else {l = mid+1;}
            }
            //cout<<l;
            res += (grid[i].size()- l);
        }
        return res;
    }
};
// @lc code=end

