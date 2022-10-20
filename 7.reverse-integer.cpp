/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        int temp = abs(x);
        while(temp>0){
            if(x>0 && rev>INT_MAX/10) return 0;
            if(x<0 && -rev<INT_MIN/10) return 0;
            rev = rev*10 + temp%10;
            temp/=10;
        }
        if(x<0) return -rev;
        cout<<(1<<31);
        return rev;
    }
};
// @lc code=end

