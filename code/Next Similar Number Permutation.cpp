//next permutation directly modifies A with next lexographically possible permutation. next_permutation fails when all are over.
// Complexity of next_permutation function is O(n! * n)
string Solution::solve(string A) {
if (next_permutation(A.begin(), A.end()))
return A;
else
return "-1";
}


//eg 124986. Traverse from last and stop at 4 as the order is broken. Now find the smallest from (986) which is greater than 4 
// and swap 4,6.
// Now sort the remaining right side. 126984 . Sort from 984. so Answer is 126489.
//Complexity is One pass. O(n) if sorting is not included.

string Solution::solve(string A) {
    
   int n =A.size();
   int i;
   for( i=n-1;i>0;i--){
       if(A[i] > A[i-1])
        break;
   }
    if( i==0 ) return string("-1");
    int x= A[i-1];
    int s=i;
    for(int j=i+1;j<n;j++){
        if(A[j]> x && A[j] < A[s])
        s=j;
    }
    swap(A[i-1],A[s] );
    sort(A.begin()+i, A.end());
    return A;
    
    
    
}
