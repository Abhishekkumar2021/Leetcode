/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution {
public:
    bool f(int idx,int final,vector<int>& jump,vector<int> &dp){
        if(idx>final) return false;
        if(idx==final) return true;
        if(dp[idx]!=-1) return dp[idx];
        for(int i=1; i<=jump[idx]; i++) if(f(idx+i,final,jump,dp)) return  dp[idx] = true;
        return dp[idx] = false;

    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return f(0,n-1,nums,dp);
    }
};
// @lc code=end

