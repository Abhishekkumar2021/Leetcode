/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(int i=0; i<s.length(); i++) m[s[i]]++;
        int cnt = 0;
        for(auto it : m){
            cnt+=2*(it.second/2);
        }
        if(cnt<s.length()) cnt+=1;
        return cnt;
    }
};
// @lc code=end

