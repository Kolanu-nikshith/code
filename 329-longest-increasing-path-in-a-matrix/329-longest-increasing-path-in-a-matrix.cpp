class Solution {
public:
    
    int dx[4] ={0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    int longestIncreasingPath(vector<vector<int>>& mat) {
        
        
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++ ){
                int res = dfs(mat, dp, i,j,m,n, INT_MIN);
                ans=max(ans, res);
            }
        }
        return ans;
    }
    int dfs(vector<vector<int>> &mat,vector<vector<int>> &dp, int i, int j, int m, int n, int prev){
        if(i<0 || i>=m || j<0 || j>=n || mat[i][j] <=prev) return 0;
        
        if(dp[i][j] !=-1) return dp[i][j];
        int best=0;
        for(int k=0;k<4;k++){
            int nx = i+dx[k];
            int ny = j+dy[k];
            int curr = dfs(mat, dp, nx, ny, m, n, mat[i][j]);
            best = max(curr, best);
        }
        return dp[i][j]=best+1;
    }
    
};