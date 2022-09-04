/*
 * @lc app=leetcode id=2275 lang=cpp
 *
 * [2275] Largest Combination With Bitwise AND Greater Than Zero
 */

// @lc code=start
class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int maxi =0;
        for(int i=0; i<32; i++){
            int cnt=0;
            for(auto x : candidates){
                if((x>>i)&1) cnt++;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};
// @lc code=end

