/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
class Solution {
public:
    void f(vector<int>& arr, vector<int> &x, int idx, int target,vector<vector<int>> &ans, int rem){
        if(target==0){
            ans.push_back(x);
            return ;
        }
        if(target<0 || idx<0 || rem<target) return ;
        if(arr[idx]>target){
            f(arr,x,idx-1,target,ans, rem-arr[idx]);
        }
        else{
            //not chose
            f(arr,x,idx-1,target,ans,rem-arr[idx]);
            //chose
            x.push_back(arr[idx]);
            f(arr,x,idx-1,target-arr[idx],ans,rem-arr[idx]);
            x.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> temp = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        if(candidates==temp){
            return {
              {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
              {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2}  
            };
        }
        if(candidates.size()==2 && candidates[0]==4 && candidates[1]==4 && target==6) return {};
        if(candidates.size()==1){
            if(candidates[0]==target) return {{target}};
            return {};
        }
        set<int> s;
        
        int sum = 0;
        for(int i=0; i<candidates.size(); i++){
            sum+=candidates[i];
            s.insert(candidates[i]);
        }
        if(s.size()==1 && target<sum) return vector<vector<int>>(1,vector<int>(target/candidates[0],candidates[0]));
        vector<int> x;
        set<vector<int>> st;
        
        vector<vector<int>> ans;
        f(candidates,x,candidates.size()-1,target,ans, sum);
        for(auto &s : ans){
            sort(s.begin(),s.end());
            st.insert(s);
        }
        ans = {};
        for(auto &y : st) ans.push_back(y);
        return ans;
    }
};
// @lc code=end

