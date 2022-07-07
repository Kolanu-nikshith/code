class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        
        
        int m = s1.size(), n=s2.size();
        if(m+n != s3.size()) return false;
        bool dp[m+1][n+1];
        memset(dp, false, sizeof(dp));
        dp[0][0] = true;
        
        for(int i=0;i<m+1;i++){
            for(int j=0;j<n+1;j++){
                if(i==0 and j==0) dp[i][j] = true;
                else if(i==0)
                    dp[i][j] = dp[i][j-1] and s2[j-1] == s3[i+j-1];
                else if(j==0) 
                    dp[i][j] = dp[i-1][j] and s1[i-1] == s3[i+j-1];
                else
                
dp[i][j] = (dp[i][j-1] and (s3[i+j-1] ==  s2[j-1])) or ((s3[i+j-1] == s1[i-1]) and dp[i-1][j]);
                
            }
        }
        return dp[m][n];
    }
};