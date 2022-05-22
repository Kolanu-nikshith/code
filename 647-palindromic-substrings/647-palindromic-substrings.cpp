class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        if(n==1 || n==0) return n;
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
                    mn++;
                }
                else if(j-i==1 and s[i]==s[j]){
                    dp[i][j] = 1; 
                    mn++;
                } 
                else if(s[i]==s[j] and dp[i+1][j-1]) {
                    dp[i][j] = 1; mn++;
                }
                // if(dp[i][j] and dp[i][i] and j-i > mn){
                //     st=i;
                //     e=j;
                //     mn = j-i;
                   // cout<<st<<" "<<e<<" "<<mn<<endl;
                }
            }
        
        return mn;
//       return s.substr(st, mn+1);
       
       
    }
};