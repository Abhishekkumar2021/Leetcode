/*
 * @lc app=leetcode id=1953 lang=cpp
 *
 * [1953] Maximum Number of Weeks for Which You Can Work
 */

// @lc code=start
class Solution {
public:

    long long numberOfWeeks(vector<int>& milestones) {
        long long sum = accumulate(milestones.begin(),milestones.end(),0LL);
        int mx = *max_element(milestones.begin(),milestones.end());
        return min(sum,2*(sum-mx)+1);        
    }
};
// @lc code=end

