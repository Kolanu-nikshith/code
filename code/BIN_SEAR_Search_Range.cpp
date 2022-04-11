vector<int> Solution::searchRange(const vector<int> &A, int B) {
    if(!binary_search(A.begin(), A.end(), B)) return {-1,-1};
    
    //A={10,20,20,30};
    //lower bound return starting index 1;
    //upper bound returns next elements index. here 3
    //lower,upper bound returns an iterator. so again use, low-v.begin();
    //lower,upperbound returns 0 if element not found.
    /*
    int low = std::lower_bound(A.begin(), A.end(), B) -A.begin();
    int up = std::upper_bound(A.begin(), A.end(), B) - A.begin()-1;
    
    if(low==0 && A[low]!=B) return {-1,-1};
    return {low,up};
    */
    
    //for starting range, in A[mid]==B, store mid and restrict high
    //for ending range, in A[mid]==B, store mid and restrict low
  
    int low = 0, high = A.size()-1;
    int ans1=-1, ans2=-1;
    while(low<=high){
    int mid = low + (high-low)/2;
    if(A[mid]== B){
        ans1 = mid;
        high = mid-1; 
    }
    else if(A[mid]< B){
        low = mid+1;
    }
    else if (A[mid] > B){
        high = mid-1;
    }
    
    }
    
    low = 0; high = A.size()-1; 
   
   while(low<=high){
    int mid = low + (high-low)/2;
    if(A[mid]== B){
        ans2 = mid;
        low = mid+1; 
    }
    else if(A[mid]< B){
        low = mid+1;
    }
    else if (A[mid] > B){
        high = mid-1;
    }
    
    }
    
    
    return {ans1,ans2};
    
    
    
}
