string Solution::longestCommonPrefix(vector<string> &A) {
    int n=A.size();
    int pre=A[0].size();
    
    for(int i=1;i<A.size();i++){
        int j=0;
        while(A[0][j]==A[i][j]){
            j++;
        }
        if(j==0) return "";
        pre = min(pre, j);
    }
    return A[0].substr(0,pre);
    
}
