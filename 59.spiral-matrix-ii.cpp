/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
// optimised.

// class Solution {
// public:

//     int floorMod(int x, int y) {
//         return ((x % y) + y) % y;
//     }

//     vector<vector<int>> generateMatrix(int n) {
//         vector<vector<int>> result (n, vector<int>(n));
//         int cnt = 1;
//         int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
//         int d = 0;
//         int row = 0;
//         int col = 0;
//         while (cnt <= n * n) {
//             result[row][col] = cnt++;
//             int r = floorMod(row + dir[d][0], n);
//             int c = floorMod(col + dir[d][1], n);
//             // change direction if next cell is non zero
//             if (result[r][c] != 0) d = (d + 1) % 4;
//             row += dir[d][0];
//             col += dir[d][1];
//         }
//         return result;
//     }
// };

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1 = 0, r2 = n-1;
        int c1 = 0, c2 = n-1;
        int val = 0;
		
		// result matrix
        vector<vector<int>> v(n, vector<int> (n));
        while(r1 <= r2 && c1 <= c2)
        {
            // left to right (row will be fixed)
            for(int i = c1; i <= c2; ++i)
                v[r1][i] = ++val;
				
				// move down(col will be fixed)
            for(int i = r1+1; i <= r2; ++i)
                v[i][c2] = ++val;
				
            // move right to left
            // move  up
            if(r1 < r2 && c1 < c2)
            {
                // move right to left (row will be fixed)
                for(int i = c2-1; i>c1; --i)
                    v[r2][i] = ++val;
					
					// move up (col will be fixed)
					for(int i = r2; i>r1; --i) 
                    v[i][c1] = ++val;
            }
            ++r1;
            --r2;
            ++c1;
            --c2;
        }
        return v;
    }

};
// @lc code=end

