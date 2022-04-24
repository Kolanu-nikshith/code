/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
//if num-1 is not there in SET only, loop for num+1 and increase count
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int num:nums){
            s.insert(num);
        }
        int  m=0;
        for(int num:nums){
            if(!s.count(num-1)){
                int st=1;
                int y=num+1;
                while(s.count(y)){
                    y++;
                    st++;
                }
                
                m = max(m , st);
            }
            
        }
        return m;
        
        
    }
};
// @lc code=end

