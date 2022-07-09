class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int ans=INT_MAX;
        
        
        string s=strs[0],t;
        
        for(int j=1;j<strs.size();j++){
            t=strs[j];
            int i=0;
            while(i<min(s.size(), t.size()) and s[i]==t[i]){
                i++;
            }
            ans=min(ans, i);
            s = s.size()<t.size()? s:t;
            cout<<s<<" ";
        }
        return strs[0].substr(0,ans);
        
        
        
    }
};