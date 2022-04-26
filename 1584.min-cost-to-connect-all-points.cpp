/*
 * @lc app=leetcode id=1584 lang=cpp
 *
 * [1584] Min Cost to Connect All Points
 */

// @lc code=start
class Solution {

public:
    
    int par[1001];
    
    //find the parent for krushkal
    
    int fin(int x){
        if(par[x]<0) return x;
        return fin(par[x]);
    }
    
    void uni(int x, int y){
        par[x] = y;
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        memset(par, -1, sizeof(par));    
        // for krushkal, {distance,{x coordinate, y coordinate}} 
        vector<pair<int, pair<int, int>>> graph;
        
        for(int i=0;i<points.size();i++){
            for(int j=i+1;j<points.size();j++){
                    int manhattan = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                    graph.push_back({manhattan, {i,j}});
            }
        }
        sort(graph.begin(), graph.end());
        
        //cout<<graph[0].first<<graph[0].second.first<<graph[0].second.second;
        
        int sum=0;
        //cout<<"he"<<graph.size()<<endl;
        int n = graph.size();
        for(int i=0;i<n;i++){
            int a = fin(graph[i].second.first);
            int b = fin(graph[i].second.second);
            //cout<<"a"<<a<<",b"<<b<<endl;
            if(a!=b){
                sum = sum+ graph[i].first;
                uni(a, b);
            }
        }        
        return sum;
    }


};
// @lc code=end

