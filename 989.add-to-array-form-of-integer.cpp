/*
 * @lc app=leetcode id=989 lang=cpp
 *
 * [989] Add to Array-Form of Integer
 */

// @lc code=start
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        int n = nums.size();
        int carry = 0;
        vector<int> ans;
        for(int i=n-1; i>=0; i--){
            int sum = carry + nums[i] + k%10;
            carry = sum/10;
            ans.push_back(sum%10);
            k/=10;
        }
        while(k){
            int sum = carry +  k%10;
            carry = sum/10;
            ans.push_back(sum%10);
            k/=10;
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

