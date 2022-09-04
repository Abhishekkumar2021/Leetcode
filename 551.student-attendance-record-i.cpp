/*
 * @lc app=leetcode id=551 lang=cpp
 *
 * [551] Student Attendance Record I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        int abs = 0;
        int late = 0;
        int curr = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='A') abs++;
            if(s[i]=='L') curr++;
            else{
                late = max(late,curr);
                curr = 0;
            }
        }
        late = max(late,curr);
        if(abs>=2 || late>=3) return false;
        return true;
    }
};
// @lc code=end

