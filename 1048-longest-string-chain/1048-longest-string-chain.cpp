class Solution {
public:
    static bool comp(string &a, string &b){
        return a.size() < b.size();
    }
    int longestStrChain(vector<string>& words) {
        int res=1;
        unordered_map<string, int> m;
        sort(words.begin(), words.end(), comp);
        //for(auto a:words) cout<<a<<" ";
        
        for(int i=0;i<words.size();i++){
            m[words[i]] = 1;
            for(int j=0;j<words[i].size();j++){
                string t = words[i].substr(0,j) + words[i].substr(j+1);
                if(m.find(t)!=m.end()){
                    m[words[i]] = m[t]+1;
                    res = max(res, m[words[i]]);
                }
            }
        }
        
        return res;
    }
};