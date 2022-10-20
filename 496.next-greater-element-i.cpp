/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> next(n);
        stack<int> s;
        map<int,int> map;
        for(int i=n-1; i>=0; i--){
            map[nums2[i]] = i;
            while(!s.empty() && s.top()<nums2[i]) s.pop();
            if(s.empty()) next[i] = -1;
            else next[i] = s.top();
            s.push(nums2[i]);
        }
        int m = nums1.size();
        vector<int> ans(m);
        for(int i=0; i<m; i++){
            ans[i] = next[map[nums1[i]]];
        }
        return ans;
    }
};
// @lc code=end

