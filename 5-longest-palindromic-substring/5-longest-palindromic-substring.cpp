class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if(n==1 || n==0) return s;
       int dp[n+1][n+1];
       memset(dp, 0, sizeof(dp));
       for(int i=0;i<n;i++) dp[i][i]=1;
       int len=0;
       int mn=0;
       int st=0,e=0;
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(i==j) {
                    dp[i][j]=1;
                }
                else if(j-i==1 and s[i]==s[j]){
                    dp[i][j] = 1;                   
                } 
                else if(s[i]==s[j]) {
                    dp[i][j] = dp[i+1][j-1]?1:0;
                }
                if(dp[i][j] and dp[i][i] and j-i > mn){
                    st=i;
                    e=j;
                    mn = j-i;
                   // cout<<st<<" "<<e<<" "<<mn<<endl;
                }
            }
        }
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<dp[i][j]<<" ";
//                // if(dp[i][j])
//             }
//             cout<<endl;
//         }
        
       // cout<<st<<" "<<e<<" "<<mn<<endl;
        // string s1 = s.substr
       return s.substr(st, mn+1);
       
       
    }
};