/*
 * @lc app=leetcode id=541 lang=cpp
 *
 * [541] Reverse String II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        int l = min(n,2*k);
        for(int i=0; i<n; i+=l){
            int last = min(k,n-i);
            reverse(s.begin()+i,s.begin()+i+last);
        }
        return s;

    }
};
// @lc code=end

