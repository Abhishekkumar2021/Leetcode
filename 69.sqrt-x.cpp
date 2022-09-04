/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        double low = 0;
        double high = x;
        while(low<=high){
            double mid = (low+high)/2;
            if(abs(mid*mid-x)<0.001) return mid;
            else if(mid*mid-x<0) low = mid;
            else high = mid;
        }
        return low;
    }
};
// @lc code=end

