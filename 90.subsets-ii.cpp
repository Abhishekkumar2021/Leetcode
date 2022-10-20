/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
void f(int idx,vector<int>& nums, vector<int> &sub,vector<vector<int>> &ans){
        if(idx<0){
            ans.push_back(sub);
            return;
        }
        f(idx-1,nums,sub,ans);
        sub.push_back(nums[idx]);
        f(idx-1,nums,sub,ans);
        sub.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> sub;
        f(nums.size()-1,nums,sub,ans);
        set<vector<int>> s;
        for(auto &x:ans){
            sort(x.begin(),x.end());
            s.insert(x);
        } 
        ans = {};
        for(auto &x:s) ans.push_back(x);
        return ans;
    }
};
// @lc code=end

