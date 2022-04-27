/*
 * @lc app=leetcode id=1558 lang=cpp
 *
 * [1558] Minimum Numbers of Function Calls to Make Target Array
 */

// @lc code=start
class Solution {
public:
int minOperations(vector<int>& nums) {
        int opt1=0,opt2=0;
        for(auto x:nums)
        {
            int temp=0;
            while(x>0)
            {
                if(x%2!=0){
                    opt1++;
                    x--;
                }
                else{
                    x=x/2;
                    temp++;
                }
            }
            opt2=max(opt2,temp);
        }
        return opt1+opt2;
    }};
// @lc code=end

