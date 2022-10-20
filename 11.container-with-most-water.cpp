/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi  = INT_MIN;
        for(int i=0; i<height.size(); i++){
            for(int j=i+1; j<height.size(); j++){
                maxi = max(maxi,(j-i)*min(height[j],height[i]));
            }
        }
        return maxi;

    }
};
// @lc code=end

     