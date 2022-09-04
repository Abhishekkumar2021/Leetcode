/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n);
        int idx = 0;
        int b = 0;
        while(b<n && nums[b]<0) b++;
        int a = b-1;
        while(a>=0 && b<n){
            if(abs(nums[a])<=nums[b]){
                ans[idx] = nums[a]*nums[a];
                a--;
                idx++;
            } else{
                ans[idx] = nums[b]*nums[b];
                b++;
                idx++;
            }
        }
        while(a>=0){
            ans[idx] = nums[a]*nums[a];
            a--;
            idx++;
        }
        while(b<n){
            ans[idx] = nums[b]*nums[b];
            b++;
            idx++;
        }
        return ans;
    }
};
// @lc code=end

