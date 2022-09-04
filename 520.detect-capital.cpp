/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */

// @lc code=start
class Solution {
public:
    bool capital(char c){
        return (c>=65 && c<=90);
    }
    bool detectCapitalUse(string word) {
        if(capital(word[0])){
            for(int i=2; i<word.length(); i++) if(capital(word[1])!=capital(word[i])) return false;
        }else{
            for(int i=1; i<word.length(); i++) if(capital(word[i])) return false;
        }
        return true;
    }
};
// @lc code=end

