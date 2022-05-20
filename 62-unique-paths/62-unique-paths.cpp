class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<int> res(n, 1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                res[j] += res[j-1];
            }
        }
        
        return res[n-1];
    }
        
//         vector<vector<int>> dp(m, vector<int>(n,-1));
//         //rec(dp, m, n);
//         for(int i=0;i<m;i++) dp[i][0] = 1;
//         for(int i=0;i<n;i++) dp[0][i] = 1;
//         for(int i=1;i<m;i++){
//             for(int j=1;j<n;j++){
//                 dp[i][j] = dp[i-1][j] + dp[i][j-1];
//             }
//         }
//         return dp[m-1][n-1];
//     }
//    void rec(vector<vector<int>> &dp, int m, int n);
};