class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int odd=1,even=0;
        int n = nums.size();
        vector<int> res(n);

        for(int i=0;i<n;i++){
            if(nums[i]%2){
                res[odd] = nums[i];
                odd+=2;
            }
            else{
                res[even] = nums[i];
                even+=2;
            }
        }
        return res;
    }
};