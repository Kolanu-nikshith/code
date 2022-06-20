class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v(26,0), v2(26,0), res;
        int m=s.size(), n=p.size();
        if(m < n) return {};
        
        for(int i=0;i<n;i++){
            v2[p[i]-'a']++;
            v[s[i]-'a']++;
        }
        if(v==v2) res.push_back(0);

        
        for(int i=n, j=0;i<m;i++, j++){
            v[s[j]-'a']--;
            v[s[i]-'a']++;
            if(v==v2) res.push_back(j+1);            
            }
        return res;
    }
};