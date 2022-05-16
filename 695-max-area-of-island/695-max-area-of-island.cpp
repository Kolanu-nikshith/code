class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int m = grid.size(), n=grid[0].size();
//        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int ans=0;
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    int dis = 0;
                    dfs(grid, i, j, dis);
                    ans = max(dis, ans);
                }
            }
        }
        return ans;
    }
    void dfs(vector<vector<int>>& grid, int sr, int sc, int &dis){
        int m = grid.size();
        int n = grid[0].size();
        if(sr<0 || sr>=m || sc<0 || sc>=n || grid[sr][sc]==0 ) return;
        dis++; 
        grid[sr][sc] = 0;
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        
        for(int k=0;k<4;k++){
            dfs(grid, sr+dx[k], sc+dy[k], dis);       
        }
    }
};