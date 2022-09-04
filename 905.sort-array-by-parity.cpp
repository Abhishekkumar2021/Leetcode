/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int> ans;
        // for(int i=0; i<nums.size(); i++) if(nums[i]%2==0) ans.push_back(nums[i]);
        // for(int i=0; i<nums.size(); i++) if(nums[i]%2==1) ans.push_back(nums[i]);
        // return ans;
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
        return nums;
    }
};
// @lc code=end

