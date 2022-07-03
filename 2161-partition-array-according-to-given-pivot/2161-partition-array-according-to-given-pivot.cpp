class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size(), c=0;
        vector<int>  le, ge, res(n);
        for(int i=0;i<n;i++){
            if(nums[i] < pivot) le.push_back(nums[i]);
            else if(nums[i]> pivot) ge.push_back(nums[i]);
            else c++;
        }
        res.assign(le.begin(), le.end());
        while(c--){
            res.push_back(pivot);
        }
        res.insert(res.end(), ge.begin(), ge.end());
        
        return res;
        
    }
};