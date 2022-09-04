/*
 * @lc app=leetcode id=89 lang=cpp
 *
 * [89] Gray Code
 */

// @lc code=start
class Solution {
public:
    void f(int i,vector<int> &num){
        int x = 1<<i;
        int idx = 0;
        while(idx<x){
            int t = num[idx];
            t+=x;
            num[2*x - idx - 1] = t;
            idx++;
        }
    }
    vector<int> grayCode(int n) {
        int total = 1<<n;
        vector<int> num(total,0);
        for(int i=0; i<n; i++){
            f(i,num);
        }
        return num;
    }
};
// @lc code=end

