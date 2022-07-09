class Solution {
public:
    string countAndSay(int n) {
        string s="1";int c=1;
        for(int j=1;j<n;j++){
            
            int i=0; string t;
            while(i<s.size()){
                c=1;
                while(s[i]==s[i+1]){
                    c++;
                    i++;
                }
                t+=to_string(c) + s[i++]; 
            }
            cout<<t<<" ";
            s=t;
        }
        return s;
    }
};