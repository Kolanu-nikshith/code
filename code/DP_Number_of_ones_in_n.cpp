//Given an integer n, array of n + 1 size
//ans[i] is the number of 1's in the binary representation of i.
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v1(n+1,0);
        vector<int> v2;
        for(int i=1;i<=n;i++){
             //v2.push_back(__builtin_popcount(i));
            v1[i] = v1[i & i-1]+1;
        }
        return v1;
    }
};
