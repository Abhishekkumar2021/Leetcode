/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        return ans;
    }
};
// @lc code=end

