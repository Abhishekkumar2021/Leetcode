/*
 * @lc app=leetcode id=96 lang=cpp
 *
 * [96] Unique Binary Search Trees
 */

// @lc code=start
class Solution {
public:
    int numTrees(int n) {
        if(n<=2) return n;// 1 2 3 4 5

        int cnt = 0;
        for(int i=1; i<=n; i++){
            int left = numTrees(i-1);
            int right = numTrees(n-i);
            if(left==0)cnt+=right;
            else if(right==0)cnt+=left;
            else{
                cnt+=(left*right);
            }
        }
        return cnt;
    }
};
// @lc code=end

