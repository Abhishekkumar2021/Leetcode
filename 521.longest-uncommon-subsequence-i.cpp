/*
 * @lc app=leetcode id=521 lang=cpp
 *
 * [521] Longest Uncommon Subsequence I
 */

// @lc code=start
class Solution {
public:
    int f(int i,int j, string &a,string &b){
        if(i<0 && j<0) return 0;
        if(i<0 && j>=0) return j+1;
        if(j<0 && i>=0) return i+1;
        if(i==0 && j==0) return a[i]!=b[j];
        if(a[i]!=b[j]) return 1 + f(i-1,j-1,a,b);
        return max(f(i-1,j,a,b),f(i,j-1,a,b));
    }
    int findLUSlength(string a, string b) {
        if(a==b) return -1;
        int ans = f(a.length()-1,b.length()-1, a,b);
        return ans;
    }
};
// @lc code=end

