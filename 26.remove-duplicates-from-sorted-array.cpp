/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int idx = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[idx-1]) continue;
            nums[idx] = nums[i];
            idx++;
        }
        return idx;
    }
};
// @lc code=end

