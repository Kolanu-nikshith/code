class Solution {
public:
    int networkDelayTime(vector<vector<int>>& edges, int n, int k) {
        
        vector<vector<pair<int, int>>> graph(n+1);
        //queue<pair<int, int>>;
        
        for(int i=0;i<edges.size();i++){
            int j = edges[i][0];
            graph[j].push_back({edges[i][1], edges[i][2]});        
        }
        vector<int> signal(n+1, INT_MAX);
        queue<int> q;
        q.push(k);
        signal[k] = 0;
        while(!q.empty()){
            int currnode = q.front();
            q.pop();
            
            for(auto p: graph[currnode]){
                int nei = p.first;
                int time = p.second;
                
                int arrival = signal[currnode] + time;
                if(signal[nei] > arrival){
                    signal[nei] = arrival;
                    q.push(nei);
                }
                
            }
        }
        int m=0;
        for(int i=1;i<=n;i++){
            if(signal[i]==INT_MAX) return -1;
            m =  max(m, signal[i]);
        }
        return m;
        
    
        
        
        
    }
};