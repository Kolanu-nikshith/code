class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int rem, n = nums.size(), sum=0, c=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            rem = sum-k;
            if(m.find(rem) != m.end()) c+=m[rem];
            m[sum]++;
        }
        return c;
        
    }
};