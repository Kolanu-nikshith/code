/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int j=0;
        
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] %2 ==0){
                swap(nums[i], nums[j++]);
                //n--; // this improves perf.
            }
        }
        
        return nums; 
    }
    
//      Take care of start and end as well to avoid excess comparisions    
//     vector<int> sortArrayByParity(vector<int>& nums) 
//     {
//         int start=0,end=nums.size()-1;
//         while(start<=end)
//         {
//             if(nums[end]%2==0)
//                 swap(nums[start++],nums[end]);
//             else
//                 end--;
//         }
//         return nums;
//     }
};
// @lc code=end

