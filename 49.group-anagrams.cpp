/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> m;
        for(const auto &s : strs){
            string t = s;
            sort(t.begin(),t.end());
            m[t].push_back(s);
        }
        for(auto &v : m) ans.push_back(v.second);
        return ans;
    }
};
// @lc code=end

