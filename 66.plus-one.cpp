/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int carry = 1;
        int num = 0;
        reverse(digits.begin(),digits.end());
        for(int i=0; i<digits.size(); i++){
            num = carry + digits[i];
            carry = num/10;
            ans.push_back(num%10);
        }
        if(carry) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
// @lc code=end

