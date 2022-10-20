/*
 * @lc app=leetcode id=77 lang=cpp
 *
 * [77] Combinations
 */

// @lc code=start
class Solution {
public:
    void f(int n, int k, vector<int> &arr, vector<vector<int>> &ans){
        if(k==0){
            ans.push_back(arr);
            return;
        }
        if(n==0 && k!=0) return;
        f(n-1,k,arr,ans);
        arr.push_back(n);
        f(n-1,k-1,arr,ans);
        arr.pop_back();
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> arr;
        f(n,k,arr,ans);
        return ans;
    }
};
// @lc code=end

