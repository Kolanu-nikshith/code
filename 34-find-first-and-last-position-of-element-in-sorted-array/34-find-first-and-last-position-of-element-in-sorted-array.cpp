class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        auto it2 = upper_bound(nums.begin(), nums.end(), target);
        //cout<<*it1<<" "<<*it2<<endl;
        if(it1==it2) return {-1,-1};
        vector<int> res;
        res.push_back(it1-nums.begin());
        res.push_back(it2-nums.begin()-1);
        return res;
        
    }
};