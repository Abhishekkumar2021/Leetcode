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
        long long high = n;
        long long low = 1;
        while(low<high){
            int mid = (low+high)/2;
            if(guess(mid)==0) return mid;
            if(guess(mid)==-1) high = mid-1;
            else if(guess(mid)==1) low = mid+1;
        }
        return low;
    }
};
// @lc code=end

