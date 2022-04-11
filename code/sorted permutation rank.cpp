//rank = number of characters less than that character * (N-1)! + rank of permutation of string with the first character removed
// using  mod for fact, ans variable on line 19 is optional. But for large value, even using mod will give correct result.

#define mod 1000003

int fact(int n){
    if(n==0) return 1;
    else    return (n*fact(n-1))%mod;
}
int Solution::findRank(string A) {
    
    int n=A.size();
    int ans=0;
    for(int i=0;i<n-1;i++){
      
      //find how many are less.
      int c=0;
      for(int j=i+1;j<n;j++){
          if(A[j]< A[i])
          c++;
      }
      
      ans += (c* fact(n-i-1))%mod ;
    }
    return (ans+1)%mod;
    
    
}
