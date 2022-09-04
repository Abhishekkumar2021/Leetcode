/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxi[n];
        maxi[n-1] = prices[n-1];
        for(int i=n-2; i>=0; i--) maxi[i] = max(maxi[i+1],prices[i]);

        int ans = INT_MIN;
        for(int i=0; i<n-1; i++){
            ans = max(ans,maxi[i+1]-prices[i]);
        }
        if(ans<=0) return 0;
        return ans;
    }
};
// @lc code=end

