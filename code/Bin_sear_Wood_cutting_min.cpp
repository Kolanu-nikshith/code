//https://www.interviewbit.com/problems/woodcutting-made-easy/

//we are cutting at height h and remove the wood above that and check if it is sufficient.
//low, high are 0, max height of tree here.
//calculate mid and check if all are cut above that, will we get enough wood or not.
//if valid, store that mid and use low = mid+1
//if not valid, we did not get enough wood so, change high = mid-1.




int isvalid( long long int  mid, vector<int> &A, int B){
     long long int  sum=0;
    for( long long int  i=0;i<A.size();i++){
        if(A[i]>=mid){
            sum += A[i]-mid;
        }
    }
    return sum>=B;
}

int Solution::solve(vector<int> &A, int B) {
     long long int  ans=-1;
     long long int  low = 0;
     long long int  n = A.size();
     long long int  high = *max_element(A.begin(), A.end());
    
    while(low<=high){
         long long int  mid = low + (high-low)/2;
        if(isvalid(mid,A,B)){
            ans=mid;
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans;
    
    
    
    
}
