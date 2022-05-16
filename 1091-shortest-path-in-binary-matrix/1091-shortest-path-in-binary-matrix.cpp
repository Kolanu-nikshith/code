class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        return bfs(grid);
    }
    
    int bfs(vector<vector<int>>& grid){
        
        int n = grid.size();
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        queue<pair<pair<int, int>, int>> q;
           
        int dx[8] ={0,0,1,-1,1,1,-1,-1};
        int dy[8] ={1,-1,0,0,1,-1,1,-1};

        if(grid[0][0]==1) return -1;
        q.push({{0,0},0});
        while(!q.empty()){
            auto e = q.front();
            q.pop();
            
            if(e.first.first == n-1 and e.first.second == n-1){
                return e.second+1;
            }
            for(int i=0;i<8;i++){
                int nx = e.first.first + dx[i];
                int ny = e.first.second + dy[i];
                int dis = e.second;
                if(nx>=0 and nx<n and ny>=0 and ny<n and !vis[nx][ny] and grid[nx][ny]==0){
                    q.push({{nx, ny},dis+1});
                    vis[nx][ny] = true;
                }            
            }
        }
        return -1;
    }
};