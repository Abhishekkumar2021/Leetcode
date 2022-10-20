/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    void f(int idx, vector<int>& nums,vector<vector<int>> &ans){
        if(idx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx; i<nums.size(); i++){
            swap(nums[idx],nums[i]);
            f(idx+1,nums,ans);
            swap(nums[idx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        f(0,nums,ans);
        return ans;
    }
};
// @lc code=end

