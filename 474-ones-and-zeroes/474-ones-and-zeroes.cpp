class Solution {
public:
    int dp[601][101][101];
    int findMaxForm(vector<string>& strs, int m, int n) {
        unordered_map<int, pair<int, int>> mp;
        int sz = strs.size();
        vector<int> z(sz, 0), o(sz, 0);
        unordered_map<string, int> res;
        for(int i=0;i<sz;i++){
            z[i] = count(strs[i].begin(), strs[i].end(), '0');
            o[i] = strs[i].size()-z[i];
        }
        memset(dp, -1, sizeof(dp));
        return knapsack(m,n,0, sz, z, o);
    }
    int knapsack(int m, int n , int i, int &size, vector<int> &z, vector<int> &o){
        
        if(i>=size) return 0;
        if(m<=0 and n<=0) return 0;
        if(dp[i][m][n] != -1) return dp[i][m][n];
        // string ss = to_string(m)+"-"+to_string(n)+"-"+to_string(i);
        // //if(res[ss]) return res[ss];
        if(-1 != dp[i][m][n]){
            return dp[i][m][n];
        }
//        if(dp[m][n]!=-1) return dp[m][n];
        
        int pick=0;
        if(z[i] <=m and o[i]<=n)
            pick = 1+knapsack(m-z[i], n-o[i], i+1, size, z,o);
        
        int notpick = 0;
        notpick = knapsack(m,n,i+1, size, z,o);
        return dp[i][m][n] = max(pick, notpick);
        
        }
    
};