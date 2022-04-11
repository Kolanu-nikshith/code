//just parse the string from right, left. if mismath increment count. if count >1 , error else palindrom can be made by deleting one char.


int Solution::solve(string A) {
    
    int start=0;
    int end = A.length()-1;
    int c=0;
    char t;
    while(start<=end){
        if(A[start]!=A[end]){
            start++;
            c++;
        }
        else{
            start++;
            end--;
        }
    }
    
    if(c<=1){
        return 1;
    }
    else{
        return 0;
    }
    
    
}
