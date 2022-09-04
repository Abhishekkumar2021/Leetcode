/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    int pop_count(int n){
        int cnt =0;
        for(int i=31; i>=0; i--) if((n>>i)&1) cnt++;
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0; i<=n; i++){
            ans.push_back(pop_count(i));
        }
        return ans;
    }
};
// @lc code=end

