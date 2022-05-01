/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        unsigned int low=1, high = pow(2,31)-1;
        while(low<=high){
            int mid = low + (high-low) /2;
            int c = guess(mid);
            if(c == 0) return mid;
            else if(c==1) low = mid+1;
            else high=mid-1;
        }
        return -1;
        
    }
};

// Ternary Search (log n base 3)

// public int guessNumber(int n) {
//         int low = 1;
//         int high = n;
//         while (low <= high) {
//             int mid1 = low + (high - low) / 3;
//             int mid2 = high - (high - low) / 3;
//             int res1 = guess(mid1);
//             int res2 = guess(mid2);
//             if (res1 == 0)
//                 return mid1;
//             if (res2 == 0)
//                 return mid2;
//             else if (res1 < 0)
//                 high = mid1 - 1;
//             else if (res2 > 0)
//                 low = mid2 + 1;
//             else {
//                 low = mid1 + 1;
//                 high = mid2 - 1;
//             }
//         }
//         return -1;


// @lc code=end

