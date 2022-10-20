/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        if(m>n) return findMedianSortedArrays(nums2,nums1);
        int e1,e2;
        int l=0,r=m;
        int half = (m+n+1)/2;
        while(l<=r){
            e1 = (l+r)/2;
            e2 = half - e1;
            int l1 = e1==0?INT_MIN:nums1[e1-1];
            int l2 = e2==0?INT_MIN:nums2[e2-1];
            int r1 = e1==m?INT_MAX:nums1[e1];
            int r2 = e2==n?INT_MAX:nums2[e2];
            if(l1<=r2 && l2<=r1){
                if((m+n)%2==0){
                    return 1.0*(max(l1,l2) + min(r1,r2))/2;
                }
                else{
                    return max(l1,l2);
                }
            }
            else if(l1>r2)
                r = e1-1;
            else
               l = e1+1; 

        }
        return 0;
    }
};
// @lc code=end

