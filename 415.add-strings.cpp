/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.length()-1, j=num2.length()-1;
        int carry = 0;
        string res = "";
        while(i>=0 || j>=0){
            int x = (i<0)? 0: num1[i--]-'0';
            int y = (j<0)? 0: num2[j--]-'0';
            int sum = x+y+carry;
            res += sum%10+'0';
            carry = sum/10;
        }
        
        if(carry!=0){
            res+=carry+'0';
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

