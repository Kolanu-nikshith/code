/*
 * @lc app=leetcode id=1317 lang=cpp
 *
 * [1317] Convert Integer to the Sum of Two No-Zero Integers
 */

// @lc code=start
class Solution {
public:
    vector<int> getNoZeroIntegers(int n,int c=1) {
        vector<int>v;
        while(n--)
        {
            if((to_string(n)).find('0')==string::npos&&(to_string(c)).find('0')==string::npos)return v={c,n};
            c++;
        }
        return v;
    }};
// @lc code=end

