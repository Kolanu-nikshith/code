//A is m*n matrix. Given B search in the matrix.
//All the elements are sorted. That is if you convert this 2d array to 1D, it will be sorted.
//use binary search on first element of all rows. So one pass O(log m) and find in which row the element might be present.
//the element will be present in high variable row.
//if high==-1, return B not found.
//Search the element in that row. (log n)
//total = O(log m+ log n)

/*inbuilt function.
for(auto x : A){
        if(x.front() <= B && x.back() >= B && binary_search(x.begin(),x.end(),B)){
           return 1;
        }
    }
return 0;
*/  
//find x
//binary_search(v.begin(), v.end(), x)

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
    int low=0;
    int m=A.size();
    int high = m-1;
    
    while(low<=high){
        int mid = low+(high-low)/2;
        if(A[mid][0] == B){
            return 1;
        }

        if(A[mid][0] <= B){
            low = mid+1;
        }
        if(A[mid][0] > B){
            high = mid-1;
        }
    }
    if(high==-1) return 0;
    int start = 0;
    int end = A[high].size()-1;
    
    while(start<=end){
        int mm = start + (end-start)/2;
        if(A[high][mm] == B){
            return 1;
        }
        if(A[high][mm] <= B){
            start = mm+1;
        }
        if(A[high][mm] > B){
            end = mm-1;
        }
        
    }
    return 0;
  
}
