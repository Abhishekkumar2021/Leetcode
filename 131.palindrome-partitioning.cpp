/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        for(int i=0; i<s.size(); i++){
            for(int j=0; j<s.size(); j++){
                string x = "";
                for(int k=i; k<=j; k++) x+=s[k];
                string temp = x;
                reverse(temp.begin(),temp.end());
                if(temp==x) ans.push_back(x);
            }
        }
        return ans;
    }
};
// @lc code=end

