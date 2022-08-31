class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        map<int, vector<pair<int, int>>> m;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                m[abs(i-rCenter) + abs(j-cCenter)].push_back({i,j});
            }
        }
        vector<vector<int>> v;
        for(auto it:m){
            auto a = it.first;
            auto b = it.second;
            for(auto c:it.second){
                v.push_back({c.first, c.second});
            }
        }
        return v;
        
    }
};