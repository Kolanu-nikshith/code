class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
     vector<vector<int>> ans;
    vector<int> temp;
        backtrack(1, temp, k, n, ans);
        return ans;
    }
    
    void backtrack(int s, vector<int> temp, int k, int n, vector<vector<int>> &ans){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int i=s;i<=n;i++){
            temp.push_back(i);
            backtrack(i+1, temp, k, n, ans);
            temp.pop_back();
        }
    }
};