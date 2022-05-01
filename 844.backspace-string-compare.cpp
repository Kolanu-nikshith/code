/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string s, string t) {
                int n1 = s.length();
        int n2 = t.length();
        int j=0, k=0;
           for(int i=0;i<n1;i++){
                if(s[i]!='#'){
                   s[j++] = s[i];
                }
               else if(j>0){ j--;}
           }       

           for(int i=0;i<n2;i++){
                if(t[i]!='#'){
                   t[k++] = t[i];
                }
               else if(k>0){ k--;}
           }       
        if(j!=k) return false;
        for(int i=0;i<j;i++){
            if(s[i]!=t[i]) return false;
        }
        return true;

    
    }
};
// @lc code=end

