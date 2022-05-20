class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& og) {
       int r=og.size();
        int c=og[0].size();
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
            {
                if(i==0 || j==0)
                {
                    if(i==0 && j==0 && og[i][j])
                        return 0;
                    if(i==0 && j==0 && og[i][j]==0) {og[i][j]=1;continue;}
                    if(og[i][j])
                        og[i][j]=0;
                    else if(i==0)
                        og[i][j]=og[i][j-1];
                    else if(j==0)
                        og[i][j]=og[i-1][j];
                }
                else
                {
                    if(og[i][j])
                        og[i][j]=0;
                    else
                        og[i][j]=og[i-1][j]+og[i][j-1];
                }
            }
        return og[r-1][c-1];
    }
};