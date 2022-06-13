class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
       //recursion 
        int n = triangle.size();
//         vector<vector<int>> dp(n, vector<int>(n,0));
//         //return solve(0,0,n,triangle, dp);
//         for(int i=0;i<n;i++){
//             dp[n-1][i] = triangle[n-1][i];
//         }
        
        // for(int i=n-2;i>=0;i--){
        //     for(int j=i;j>=0;j--){
        //         dp[i][j] = triangle[i][j] + min(dp[i+1][j], dp[i+1][j+1]);
        //     }
        // }
        
        //optimise space
            vector<int> prev(n);
            vector<int> curr(n);
        for(int i=0;i<n;i++){
                    prev[i] = triangle[n-1][i];
        }
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                curr[j] = triangle[i][j] + min(prev[j], prev[j+1]);
            }
            prev=curr;
        }
        
        
        
        return prev[0];
        
    }

    
    
    int solve(int i, int j, int n, vector<vector<int>>& t, vector<vector<int>>& dp){
        if(i==n-1) return t[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int b = t[i][j] + solve(i+1, j, n, t,dp);
        int bright = t[i][j] + solve(i+1, j+1,n,t, dp);
        return dp[i][j]= min(b, bright);
    }
};