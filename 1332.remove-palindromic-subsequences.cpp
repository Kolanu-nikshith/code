/*
 * @lc app=leetcode id=1332 lang=cpp
 *
 * [1332] Remove Palindromic Subsequences
 */

// @lc code=start
class Solution {
public:
    int removePalindromeSub(string s) {
        string st=s;
        reverse(s.begin(), s.end());
        if(st==s) return 1;
        return 2;
        
    }
};
// @lc code=end

