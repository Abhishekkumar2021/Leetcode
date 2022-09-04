/*
 * @lc app=leetcode id=78 lang=cpp
 *
 * [78] Subsets
 */

// @lc code=start
class Solution {
public:
    void f(int idx,vector<int>& nums, vector<int> sub,vector<vector<int>> &ans){
        if(idx<0){
            ans.push_back(sub);
            return;
        }
        f(idx-1,nums,sub,ans);
        sub.push_back(nums[idx]);
        f(idx-1,nums,sub,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        f(nums.size()-1,nums,sub,ans);
        return ans;
    }
};
// @lc code=end

