class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        return bfs(image, sr, sc, newColor);
        
    }
    
    vector<vector<int>> bfs(vector<vector<int>>& image, int sr, int sc, int newColor){
        int m = image.size(), n = image[0].size();
        int oldc = image[sr][sc];
        queue<pair<int, int>> q;
           
        int dx[8] ={0,0,1,-1};
        int dy[8] ={1,-1,0,0};

        q.push({sr,sc});
        if(image[sr][sc] == newColor) return image;
        image[sr][sc] = newColor;
        while(!q.empty()){
            auto e = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nx = e.first + dx[i];
                int ny = e.second + dy[i];
                if(nx>=0 and nx<m and ny>=0 and ny<n and image[nx][ny]==oldc){
                    q.push({nx, ny});
                    image[nx][ny] = newColor;
                }            
            }
        }
        return image;
    }
};