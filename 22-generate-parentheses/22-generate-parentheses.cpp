class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string s;
        s.resize(2*n);
        vector<string> ans;
        generateall(ans, s, 0, 0, 0, n);
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
    
    void generateall(vector<string> &ans,string s,int index, int open, int close, int n){
        if(index==s.length()){
           // if(isvalid(s)){
                ans.push_back(s);
            //}
        return;
        }
        
        if(open< n){
            s[index]='(';
            generateall(ans, s, index+1, open+1, close,n);            
        }
        if(close<open){
            s[index] = ')';
            generateall(ans, s, index+1, open, close+1,n);            
        }
    }
};