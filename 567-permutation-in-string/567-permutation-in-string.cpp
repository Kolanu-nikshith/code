class Solution {
public:
    // int vec1[26], vec2[26];
    vector<int> vec1, vec2;
    bool checkInclusion(string s1, string s2) {
        // memset(vec1, 0, sizeof(vec1));
        // memset(vec2, 0, sizeof(vec2));
        vec1.resize(26);
        vec2.resize(26);
        
        for(char c: s1)
            vec1[c-'a']++;
        
        int  m = s1.size(), n = s2.size();
        for(int i=0;i<(n-m+1);i++){
            // vec2.clear();
            // vec2.resize(26);
            fill(vec2.begin(), vec2.end(), 0);
            calchar(s2.substr(i,m));
            if(vec1 == vec2) return true;
        }
        return false;
    }
    void calchar(string s){
        for(char c: s){
            vec2[c-'a']++;
        }
    }
};