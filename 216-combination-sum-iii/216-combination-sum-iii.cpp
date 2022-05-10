class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> v;
        backtrack(1, 0, n, k, v);
        return ans;
    }
    
    void backtrack(int currnum,int currsum,int n, int k, vector<int> temp ){
        if(currsum == n and temp.size()==k ){
            ans.push_back(temp);
            return;
        }
        for(int i=currnum;i<=9;i++){
            temp.push_back(i);
            backtrack(i+1,currsum+i, n,k, temp );
            temp.pop_back();
        }
    }
    
};