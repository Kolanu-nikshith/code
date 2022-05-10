class Solution {
public:
    vector<vector<int>> ans;
   // set<vector<int>> s;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        backtrack(0, candidates, temp, target);
        // for(auto it=s.begin();it!=s.end();it++){
        //     ans.push_back(*it);
        // }
        return ans;
    }
    void backtrack(int currInd, vector<int> & candidates,vector<int> &temp, int target){
        if(0==target){
            ans.push_back(temp);
            return;
        }
        for(int i=currInd;i<candidates.size();i++){
            if(i>currInd && candidates[i]==candidates[i-1]) continue;
            if(candidates[i] > target) break;
            temp.push_back(candidates[i]);
            backtrack(i+1,  candidates,temp, target-candidates[i]);
            temp.pop_back();
        }
    }
};