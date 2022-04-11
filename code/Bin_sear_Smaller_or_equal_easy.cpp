//Just add count = mid+1, after low = mid+1 condition for smaller or equal.
//Just add count = mid-1, after high = mid-1 condition for greater or equal.

int Solution::solve(vector<int> &A, int B) {
   
    int n = A.size();
     int low = 0;
    int high = n-1;
    int count = 0;
    
    
    while(low<=high){
    int mid=  low+ (high-low)/2;
    if(A[mid] <=B){
        low = mid+1;
        count = mid+1;
    }    
    if(A[mid]>B){
        high = mid-1;
    }
    }
    return count;
    
  /*
  
   while(low<=high){
    int mid=  low+ (high-low)/2;
     
    if(A[mid]>=B){
        high = mid-1;
        count = mid-1;
    }
    
     if(A[mid] <B){
        low = mid+1;
        
    }  
    
    }
    return count;
  */
  
  
  
}
