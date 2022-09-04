/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map<char,int> m = {};
        // for(int i=0; i<s.length(); i++) m[s[i]]++;
        // for(int i=0; i<t.length(); i++){
        //     if(m.count(t[i])==0 || m[t[i]]==0) return t[i];
        //     else m[t[i]]--;
        // } 
        // return 'c';
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            ans-=s[i];
            ans+=t[i];
        }
        ans+=t[s.size()];  
        return ans;
    }
};
// @lc code=end

