//always perform operations on small sized array.
//low, high are also 0, size(small array)
//now, we need to calculate midA, midB.
//MidB (total mid) - midA;
//Always check midleftA, midleftB with INT_MIN and other with INT_MAX for border cases
//midleft is A[midA-1];
//midright is A[midA];
//remember -1 for left and not for right.


//The A,B array are partitioned such that
//elements in left Array A + left Array B = elements in right Array + right Array B  
//in left array A, two elements. One is left of midA, one is right of midA.
//midA-left is the max in that left partition and mid-A right element is the min in that right partition of A.
//midB-left is the max in that left partition and mid-B right element is the min in that right partition of A.
//midAleft <= midBright && midBleftelement <= midArightelement.
//SO cross referencing is happenning here. if partioton is found, then check if even or odd and return accordingly.


//midleftA > midBright then change the High of A. that is we are moving towards left making left partition small.
//else make low = midA+1;



double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int m = A.size();
    int n = B.size();
    
    if(m>n) return findMedianSortedArrays(B,A);
    
    int l = 0;
    int h = m;
    
    while(l<=h){
        
        int midx = l+(h-l)/2;
        int midy = (m+n+1)/2 - midx;//+1 because to handle both even and odd cases.
        
        //find maxleftx, minrightx, maxlefty, minrighty;
        
        int maxleftx = midx==0? INT_MIN: A[midx-1];
        int minrightx = midx==m? INT_MAX: A[midx];
        
        int maxlefty = midy==0? INT_MIN: B[midy-1];
        int minrighty = midy==n? INT_MAX: B[midy];


        if(maxleftx<=minrighty && maxlefty <= minrightx){
            if((m+n)%2 == 0){
                return (   (double)max(maxleftx,maxlefty) + min(minrightx,minrighty)  )/2;
            }
            else{
                return double(max(maxleftx,maxlefty));
            }
            
        }   
        else if(maxleftx > minrighty){
            h = midx-1;
        }
        else
            l = midx+1;
        
    }
    
}
