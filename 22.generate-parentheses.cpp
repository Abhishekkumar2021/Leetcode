/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    void f(int left,int right,string s,vector<string> &ans){
        if(left<0 || right<0) return;
        if(left==0 && right==0){
            ans.push_back(s);
            return;
        }
        if(left==right){
            f(left-1,right,s+"(",ans);
        }
        if(left<right){
            f(left-1,right,s+"(",ans);
            f(left,right-1,s+")",ans);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s;
        f(n,n,s,ans);
        return ans;
    }
};
// @lc code=end

