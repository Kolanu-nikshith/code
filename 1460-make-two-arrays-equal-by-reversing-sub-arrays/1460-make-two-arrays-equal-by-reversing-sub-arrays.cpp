class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        vector<int> t(1001, 0);
        vector<int> a(1001, 0);
        for(int i=0;i<arr.size();i++){
            t[target[i]]++;
            a[arr[i]]++;
        }
        if(t==a) return true;
        else return false;
        
    }
};