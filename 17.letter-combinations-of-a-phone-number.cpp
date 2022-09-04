/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    void f(int idx, string digit, string curr, vector<string> &ans){
        if(idx==digit.length()){
            ans.push_back(curr);
            return;
        }
        if(digit[idx]=='7'){
            for(int j=0; j<4; j++){
                curr.push_back('p'+j);
                f(idx+1,digit,curr,ans);
                curr.pop_back();
            }   
        }
        else if(digit[idx]=='8'){
            for(int j=0; j<3; j++){
                curr.push_back('t'+j);
                f(idx+1,digit,curr,ans);
                curr.pop_back();
            }   
        }
        else if(digit[idx]=='9'){
            for(int j=0; j<4; j++){
                curr.push_back('w'+j);
                f(idx+1,digit,curr,ans);
                curr.pop_back();
            }   
        }
        else for(int i=0; i<3; i++){
            int x = (digit[idx] - '0')- 2;
            curr.push_back(97 + 3*x +i);
            f(idx+1,digit,curr,ans);
            curr.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        string curr="";
        vector<string> ans;
        f(0,digits,curr,ans);
        return ans;
    }
};
// @lc code=end

