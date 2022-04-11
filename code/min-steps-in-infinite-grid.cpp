//Min steps required in a 2d graph to  move from one point to another point. 
//(1,2) (3,4) points. max((3-1), (4-2)) is the answer. travel can be done in 8 directions.

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int preva = A[0];
    int prevb = B[0];
    int n = A.size();int ans = 0;
    for(int i = 1;i<n;i++){
        int diffa = abs(A[i] - A[i-1]);
        int diffb = abs(B[i] - B[i-1]);
        ans+= max(diffa,diffb);
        
    }
    return ans;
    
}
