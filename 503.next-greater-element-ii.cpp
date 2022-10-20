/*
 * @lc app=leetcode id=503 lang=cpp
 *
 * [503] Next Greater Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> next(n);
        stack<int> s;
        for(int i=n-1; i>=0; i--) s.push(nums[i]);
        for(int i=n-1; i>=0; i--){
            while(!s.empty() && s.top()  <= nums[i]) s.pop();
            if(s.empty()) next[i] = -1;
            else next[i] = s.top();
            s.push(nums[i]);
        }
        return next;
    }
}; 
// @lc code=end

