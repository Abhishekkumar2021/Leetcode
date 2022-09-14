/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        if(x==1 ) return 1;
        if(x==-1){
            if(n%2) return -1;
            return 1;
        }
        if(n==INT_MIN) return 0;
        if(n<0) return myPow(1/x,-n);
        if(n==0) return 1;
        if(n==1) return x;
        double half = myPow(x,n/2);
        if(n%2==0) return half*half;
        return half*half*x;
    }
};
// @lc code=end

