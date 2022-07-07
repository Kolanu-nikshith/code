class Solution {
public:
    int myAtoi(string s) {
        long val = 0;
        int n=s.size(), i=0;
        while(s[i]==' '  || s[i]=='\t' ) i++;
        bool neg=false;
        if(s[i]=='-'){
            neg=true;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        for(;i<n and isdigit(s[i]) and val<=INT_MAX;++i){
            val = val*10 + (s[i]-'0');
        }
        val =  neg? -(val): val;
        if(val > INT_MAX) return INT_MAX;
        if(val< INT_MIN) return INT_MIN;
        return val;        
    }
};