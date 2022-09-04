/*
 * @lc app=leetcode id=448 lang=cpp
 *
 * [448] Find All Numbers Disappeared in an Array
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        // vector<int> freq(n+1,0);
        // freq[0] = -1;
        // for(int i=0; i<n; i++) freq[nums[i]]++;
        // vector<int> ans;
        // for(int i=1; i<=n; i++) if(freq[i]==0) ans.push_back(i);
        // return ans;

        // constant space solution
        for(int i=0; i<n; i++){
            if(nums[abs(nums[i])-1]>0){
                nums[abs(nums[i])-1]*=-1;
            }
        }
        vector<int> ans;
        for(int i=0; i<n; i++) if(nums[i]>0) ans.push_back(i+1);
        return ans;
    }
};
// @lc code=end

