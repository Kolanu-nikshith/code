class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
//         int i = __builtin_popcount(n);
//         return i==1?true:false;
        return ((n)&(n-1))==0? true:false;
        
        
    }
};