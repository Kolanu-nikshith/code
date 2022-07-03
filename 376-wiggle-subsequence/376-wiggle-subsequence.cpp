class Solution {
public:
//     int cal(vector<int>& nums, int index, bool up){
//         int m=0;
        
//         for(int i=index+1;i< nums.size();i++){
            
//             if(up and nums[i] > nums[index] or !up and nums[index]> nums[i])
//                 m = max(m, 1+cal(nums, i, !up));
//         }
//         return m;
//     }
    
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int n=nums.size();
        int up[n], down[n];
        up[0] = down[0] = 1;
        
        for(int i=1;i<n;i++){
            if(nums[i] > nums[i-1]){
                up[i] = down[i-1]+1;
                down[i] = down[i-1];
            }
            else if(nums[i-1] > nums[i]){
                down[i] = up[i-1]+1;
                up[i] = up[i-1];
            }
            else{
                up[i] = up[i-1];
                down[i] = down[i-1];
            }
        }
        return max(up[n-1], down[n-1]);
    
    }
};