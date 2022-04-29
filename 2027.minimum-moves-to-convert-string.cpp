/*
 * @lc app=leetcode id=2027 lang=cpp
 *
 * [2027] Minimum Moves to Convert String
 */

// @lc code=start
class Solution {
public:
    int minimumMoves(string s) {
                
        
        int n = s.size(); int c=0;
        for(int i=0;i<n;){
            if(s[i]=='X'){
                for(int j=0;j<3 and i+j<n;j++) s[i+j]='O';
                c++;
                i=i+3;
            }
            else{
                i++;
            }
        }
        return c;
        

    }
};
// @lc code=end

