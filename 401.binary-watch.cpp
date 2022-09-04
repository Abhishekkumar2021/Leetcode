/*
 * @lc app=leetcode id=401 lang=cpp
 *
 * [401] Binary Watch
 */

// @lc code=start
class Solution {
public:
    vector<string> readBinaryWatch(int n) {
        vector<string> ans;
        for(int i=0; i<12; i++){
        for(int j=0; j<60; j++){
            if(__builtin_popcount(i)+__builtin_popcount(j)==n  ){
                int hr = i;
                int min = j;
                string t ="";
                t+=to_string(hr) + ":";
                if(min==0)
                t+="00";
                else if(min<10) t+="0" + to_string(min);
                else t+=to_string(min);
                ans.push_back(t);
                
            }
        }
    }
    return ans;
    }
};
// @lc code=end

