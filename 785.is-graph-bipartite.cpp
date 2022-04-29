/*
 * @lc app=leetcode id=785 lang=cpp
 *
 * [785] Is Graph Bipartite?
 */

// @lc code=start
class Solution {
public:
    vector<bool> color, vis;
    
    bool dfs(int start, vector<vector<int>> &graph, int col){
        vis[start] = true;
        color[start] = col;
        
        for(int child : graph[start]){
            if(!vis[child]){
                if(dfs(child, graph, col^1)==false) return false;
            }
            else{
                if(color[start]==color[child]) return false;
            }
        }
        return true;
    }
    
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vis.resize(n, 0);
        color.resize(n,0);
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(dfs(i, graph, 0) == false) return false;
            }
        }
        return true;
    }
};
// @lc code=end

