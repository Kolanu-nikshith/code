class Solution {
public:
    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {
        int m=w1.size(), n=w2.size();
        vector<string> res;
        
        
        vector<int> sum(m, 0);
        vector<int> mp(26,0);
        
        for(int i=0;i<n;i++){
            string w = w2[i];
            vector<int> temp(26,0);
            for(int j=0;j<w.size();j++){
                temp[w[j]-'a']++;
                mp[w[j]-'a'] = max(mp[w[j]-'a'], temp[w[j]-'a']);
            }
        }
        
        
        for(int i=0;i<m;i++){
            vector<int> v(26,0);
            string w=w1[i];
            for(int j=0;j<w.size();j++){
                v[w[j]-'a']++;
            }
            bool flag=false;
        
                for(int k=0;k<26;k++){
                    if(mp[k] > v[k] ){
                        flag=true;
                        break;
                    }
                }
             if(!flag) res.push_back(w);            
         }
        
        return res;
        
    }
};