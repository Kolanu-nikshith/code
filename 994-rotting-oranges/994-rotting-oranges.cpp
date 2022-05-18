class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
       return bfs(grid); 
    }
    
    int bfs(vector<vector<int>> &grid){
        
        
        int m = grid.size(), n = grid[0].size();
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        int total=0;
        queue<pair<int, int>> rotten;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) total++;
                if(grid[i][j]==2) rotten.push({i,j});
            }
        }
        int count =0;
        int time=0;
        while(!rotten.empty()){
            int k=rotten.size();
            count+=k;
            
            while(k--){
                auto curr = rotten.front(); rotten.pop();
                for(int i=0;i<4;i++){
                   int nx = curr.first+dx[i];
                    int ny = curr.second+dy[i];
                    
                    if(nx<0 || ny<0 || nx >= m || ny>=n || grid[nx][ny]!=1) continue;
                    rotten.push({nx, ny});
                    grid[nx][ny] = 2;
                    
                    
                }
                
            }
            if(!rotten.empty()) time++;
        
        }
        return total==count ? time:-1;
        
        
    }
};