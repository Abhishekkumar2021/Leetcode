/*
 * @lc app=leetcode id=371 lang=cpp
 *
 * [371] Sum of Two Integers
 */

// @lc code=start
class Solution {
public:
    int getSum(int a, int b) {
        int sum = a^b;
        unsigned carry = a&b;
        if(carry==0) return sum;
        return getSum(sum,carry<<1);
    }
};
// @lc code=end

