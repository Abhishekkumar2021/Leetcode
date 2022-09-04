/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
 */

// @lc code=start
class Solution {
public:
    string addStrings(string num1, string num2) {
        if(num1.length()>num2.length()) return addStrings(num2,num1);
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int l = num1.length();
        int carry = 0;
        string ans = "";
        int i;
        for(i=0; i<l; i++){
            int num = (num1[i] - '0')+(num2[i] - '0')+carry;
            carry = num/10;
            ans+=num%10 + '0';
        }
        while(i<num2.length()){
            int num = (num2[i] - '0')+carry;
            carry = num/10;
            ans+=num%10 + '0';
            i++;
        }
        if(carry) ans+=carry+'0';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
// @lc code=end

