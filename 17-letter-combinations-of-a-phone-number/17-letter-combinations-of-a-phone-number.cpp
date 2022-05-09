class Solution {
public:
    vector<vector<char>> v;
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        v = {{},{}, {'a','b','c'}, {'d','e','f'}, {'g','h', 'i'}, {'j','k','l'}, {'m','n','o'}, {'p','q','r','s'}, {'t','u','v'}, {'w','x','y','z'}};
        
        backtrack(0, digits, "");
        return ans;
    }
    
    void backtrack(int pos, string digits, string s){
        
        if(pos==digits.length()){
            if(s!="")
            ans.push_back(s); return;
        }
        int temp = digits[pos]-'0';
        for(int i=0;i<v[temp].size();i++){
            s.push_back(v[temp][i]);
            backtrack(pos+1, digits, s);
            s.pop_back();
        }
        
    }
};