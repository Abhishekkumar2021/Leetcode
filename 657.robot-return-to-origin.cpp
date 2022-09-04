/*
 * @lc app=leetcode id=657 lang=cpp
 *
 * [657] Robot Return to Origin
 */

// @lc code=start
class Solution {
public:
    int countCharacter(string &s, char c){
        int cnt = 0;
        for(int i=0; i<s.length(); i++) if(s[i]==c) cnt++;
        return cnt;
    }
    bool judgeCircle(string moves) {
        if(countCharacter(moves,'R')==countCharacter(moves,'L') && countCharacter(moves,'U')==countCharacter(moves,'D')) return true;
        return false;
    }
};
// @lc code=end

