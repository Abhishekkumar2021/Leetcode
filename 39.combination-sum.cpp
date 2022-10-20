/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void f(vector<int>& arr, vector<int> &x, int idx, int target,vector<vector<int>> &ans){
        if(target<0 || idx<0) return ;
        if(target==0){
            ans.push_back(x);
            return ;
        }
        if(arr[idx]>target){
            f(arr,x,idx-1,target,ans);
        }
        else{
            //not chose
            f(arr,x,idx-1,target,ans);
            //chose
            x.push_back(arr[idx]);
            f(arr,x,idx,target-arr[idx],ans);
            x.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> x;
        vector<vector<int>> ans;
        f(candidates,x,candidates.size()-1,target,ans);
        return ans;
    }
};
// @lc code=end
