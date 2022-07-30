class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& ws, string p) {
        vector<string > res;
        int n=ws.size();
        
        for(int i=0;i<n;i++){
            string w = ws[i];
            if(w.size()!=p.size()) continue;
            
            unordered_map<char, char> m;
            bool flag=false;
            vector<bool> check(26,false);
            for(int j=0;j<w.size();j++){
                if(m.find(w[j]) == m.end()){
                    if(check[p[j]-'a']==false){
                        m[w[j]] = p[j];
                        check[p[j]-'a'] = true;                        
                    }
                    else{
                        flag=true;
                        break;
                    }
                }
                else{
                    if(m[w[j]] != p[j] ){
                        flag=true;
                        break;
                    }
                }
            }
            if(!flag) res.push_back(w);
        }
        
        
        
        return res;
    }
};