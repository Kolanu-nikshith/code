class Solution {
public:
    int removePalindromeSub(string s) {
        string st=s;
        reverse(s.begin(), s.end());
        if(st==s) return 1;
        return 2;
        
    }
};