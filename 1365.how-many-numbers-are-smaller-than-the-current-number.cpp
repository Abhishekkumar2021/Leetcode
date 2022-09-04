/*
 * @lc app=leetcode id=1365 lang=cpp
 *
 * [1365] How Many Numbers Are Smaller Than the Current Number
 */

// @lc code=start
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // brute force approach
        int n = nums.size();
        vector<int> ans(n);
        // for(int i=0; i<n; i++){
        //     int cnt = 0;
        //     for(int j=0; j<n; j++){
        //         if(i!=j && nums[j]<nums[i]) cnt++;
        //     }
        //     ans[i] = cnt;
        // }
        // return ans;

        //hash map approach
        vector<int> temp = nums;
        sort(temp.begin(),temp.end());
        unordered_map<int,int> m;
        for(int i=0; i<n; i++) if( m.count(temp[i]) ==0 )m.insert({temp[i],i});
        for(int i=0; i<n; i++){
            ans[i] = m[nums[i]];
        }
        return ans;
    }
};
// @lc code=end

