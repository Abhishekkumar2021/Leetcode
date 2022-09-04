/*
 * @lc app=leetcode id=884 lang=cpp
 *
 * [884] Uncommon Words from Two Sentences
 */

// @lc code=start
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        map<string,int> m1;
        istringstream a(s1);
        string word;
        while(a >> word) {  
            m1[word.c_str()]++; 
        }
        istringstream b(s2);
        while(b >> word) {  
            m1[word.c_str()]++;
        }
        istringstream ab(s1);
        while(ab >> word) {  
            if(m1[word.c_str()]==1)ans.push_back(word.c_str()); 
        }
        istringstream ba(s2);
        while(ba >> word) {  
            if(m1[word.c_str()]==1)ans.push_back(word.c_str());
        }
        return ans;
    }
};
// @lc code=end

