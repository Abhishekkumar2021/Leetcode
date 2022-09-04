/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        set<char> b = {'[','{','('};
        for(int i=0; i<s.length(); i++){
            if(b.count(s[i])) st.push(s[i]);
            else{
                if(st.empty()) return false;
                char c = st.top();
                if(s[i]==')' && c!='(' || s[i]==']' && c!='[' || s[i]=='}' && c!='{') return false;
                else st.pop();
            }
        }
        return st.empty();
    }
};
// @lc code=end

