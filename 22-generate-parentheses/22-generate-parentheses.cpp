class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string s;
        s.resize(2*n);
        vector<string> ans;
        generateall(ans, s, 0);
        return ans;
    }

    bool isvalid(string s){
        int c=0;
        for(char c1:s){
            if(c1=='(') c++;
            else c--;    
            if(c<0) return false;
        }
        return c==0?true:false;
    }
    
    void generateall(vector<string> &ans,string s,int index){
        if(index==s.length()){
            if(isvalid(s)){
                ans.push_back(s);
            }
        return;
        }
        
        s[index]='(';
        generateall(ans, s, index+1);
        s[index] = ')';
        generateall(ans, s, index+1);
    }
};