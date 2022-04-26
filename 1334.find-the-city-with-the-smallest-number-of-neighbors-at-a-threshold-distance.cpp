/*
 * @lc app=leetcode id=1334 lang=cpp
 *
 * [1334] Find the City With the Smallest Number of Neighbors at a Threshold Distance
 */

// @lc code=start
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        vector<vector<int>> graph(n, vector<int>(n, INT_MAX));
        
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]][edges[i][1]] = edges[i][2];
            graph[edges[i][1]][edges[i][0]] = edges[i][2];
            
        }
        for(int i=0;i<n;i++){
            graph[i][i] = 0;
        }
        
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(graph[i][k]!=INT_MAX and graph[k][j]!=INT_MAX){
                        graph[i][j] = min(graph[i][j], graph[i][k]+ graph[k][j]);
                    }
                }
            }
        }
        int m=INT_MAX;int ans=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                //cout<<i<<j<<":"<<graph[i][j]<<endl;
                if(graph[i][j] <=distanceThreshold and i!=j) c++;
            }
           // cout<<i<<":"<<c<<endl;
            if(c<=m){
                ans  = i;
                m=c;
               // cout<<i<<":"<<ans<<endl;
            }
            // m = min(m, c);
        }
        return ans;
        
    }


};
// @lc code=end

