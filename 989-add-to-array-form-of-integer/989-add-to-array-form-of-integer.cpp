class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size(), i=n-1;
        int cur=k;
        vector<int> res;
        int carry=0;
        while(i>=0 or cur){
            if(i>=0){
                cur+=num[i--];
            }
            res.push_back(cur%10);
            cur/=10;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};