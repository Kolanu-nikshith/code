class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        
        backtrack(0,target, v, candidates); 
        return ans;
    }
    void backtrack(int i, int target,vector<int> temp, vector<int> &candidates){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(target<0) return;
        
        while(i<candidates.size()){
            temp.push_back(candidates[i]);
            backtrack(i, target-candidates[i], temp, candidates);
            temp.pop_back();
            ++i;
        }
        
    }
};