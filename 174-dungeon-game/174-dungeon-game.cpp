class Solution {
public:
    
   int solve(int i, int j,int m, int n, vector<vector<int>>& d, vector<vector<int>>& dp){
        cout<<"in:"<<i<<" "<<j<<" \n";
        if(i==m and j==n){
            if(d[i][j] >=0) return 1;
            else {cout<<d[i][j]<<"\n";return abs(d[i][j])+1;}
        }
        
        if(i<0 or j<0 or i>m or j>n) {
            cout<<1e7<<endl;
            return 1e7;}
       if(dp[i][j]!=-1) return dp[i][j];


        int curr = -d[i][j]+min(solve(i+1,j,m,n,d,dp), solve(i, j+1, m, n,d, dp));
        if(curr<=0) return  dp[i][j]=1;
        else return  dp[i][j]=curr;
        
    }
    
    
    int calculateMinimumHP(vector<vector<int>>& d) {
        int m=d.size(), n=d[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
       // int dp[m][n]={-1};
        int res = solve(0,0,m-1, n-1, d, dp);
        return res;
    }
};