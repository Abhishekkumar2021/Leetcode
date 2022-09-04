/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int curr = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) curr++;
            else{
                maxi = max(maxi,curr);
                curr = 0;
            }
        }
        maxi = max(maxi,curr);
        return maxi;
    }
};
// @lc code=end

