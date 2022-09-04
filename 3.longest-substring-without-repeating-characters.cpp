/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        map<char,int> m;
        int maxi = 0;
        for(int i=0; i<s.length(); i++){
            r = i;
            if(m.count(s[i])){
                if(m[s[i]]>=l) l = m[s[i]] + 1;
                auto itr = m.find(s[i]);
                itr->second = i;
            }else{
                m.insert({s[i],i});
            }
            maxi = max(maxi,r-l+1);
        }
        return maxi;

    }
};
// @lc code=end

