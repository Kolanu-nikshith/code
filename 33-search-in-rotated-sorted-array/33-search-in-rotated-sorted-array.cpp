class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;int pivot;
       
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return mid;
            
            //check if left side is sorted, and inclusion of target inside it.
            else if(nums[mid] >= nums[low]) {
                if(target>=nums[low] and target < nums[mid]) high = mid-1;
                else low = mid+1;
            }
            //check is right is sorted and inclusion of target in it.
            else{
                if(target>nums[mid] and target<= nums[high]) low = mid+1;
                else high = mid-1;
            }
        }
        return -1;
        
        
    }
};