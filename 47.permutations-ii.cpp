/*
 * @lc app=leetcode id=47 lang=cpp
 *
 * [47] Permutations II
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
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        f(0,nums,ans);
        set<vector<int>> s(ans.begin(),ans.end());
        ans = {};
        for(auto &x: s) ans.push_back(x);
        return ans;

    }
};
// @lc code=end

