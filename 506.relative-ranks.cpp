/*
 * @lc app=leetcode id=506 lang=cpp
 *
 * [506] Relative Ranks
 */

// @lc code=start
class Solution {
public:
    static bool comp(int a, int b){
        if(a>b) return true;
        return false;
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        // unordered_map<int,int> m;
        // vector<int>temp = score;
        // vector<string> ans(n);
        // sort(temp.begin(),temp.end(),comp);
        // for(int i=0; i<n; i++) m[temp[i]] = i+1;
        // for(int i=0; i<n; i++){
        //     if(m[score[i]]==1) ans[i] = "Gold Medal";
        //     else if(m[score[i]]==2) ans[i] = "Silver Medal";
        //     else if(m[score[i]]==3) ans[i] = "Bronze Medal";
        //     else ans[i] = to_string(m[score[i]]);
        // }
        // return ans;

        // Using priority queue
        priority_queue<pair<int,int>>q;
        vector<string> ans(n);
        for(int i=0; i<n; i++){
            q.push({score[i],i});
        }
        int pos = 0;
        while(!q.empty()){
            if(pos==0) ans[q.top().second] = "Gold Medal";
            else if(pos==1) ans[q.top().second] = "Silver Medal";
            else if(pos==2) ans[q.top().second] = "Bronze Medal";
            else ans[q.top().second] = to_string(pos+1);
            q.pop();
            pos++;
        }
        return ans;

    }
};
// @lc code=end

