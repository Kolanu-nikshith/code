class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0,m = matrix.size(), n=matrix[0].size();
        int high = m-1;
        
        while(low<high){
            int mid = low + (high-low)/2;
            if(matrix[mid][n-1] == target) return true;
            else if(matrix[mid][n-1] > target) high = mid;
            else low = mid+1;
        }
        int row = low;
        low = 0, high = n-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(matrix[row][mid] == target) return true;
            else if(matrix[row][mid] > target) high = mid-1;
            else low = mid+1;
        }
        return false;
        
    }
};