/*
 * @lc app=leetcode id=530 lang=cpp
 *
 * [530] Minimum Absolute Difference in BST
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // int maxi(TreeNode* root){
    //     if(root==NULL) return -1e5;
    //     if(root->right==NULL) return root->val;
    //     return mini(root->right);
    // }
    // int mini(TreeNode* root){
    //     if(root==NULL) return 1e5;
    //     if(root->left==NULL) return root->val;
    //     return mini(root->left); 
    // }
    // int getMinimumDifference(TreeNode* root) {
    //     if(root->left==NULL && root->right) return root->val;
    //     int leftDiff = INT_MAX;
    //     int rightDiff = INT_MAX;
    //     if(root->left) leftDiff = getMinimumDifference(root->left);
    //     if(root->right) leftDiff = getMinimumDifference(root->right);
    //     int l = abs(root->val - maxi(root->left));
    //     int r = abs(root->val - mini(root->right));
    //     return min({l,r,leftDiff,rightDiff});
    // }
    int diff = INT_MAX;
    TreeNode *prev = NULL;
    void dfs(TreeNode *root) {
        // moving to the left as much as we can
        if (root->left) dfs(root->left);
        // if we find at least a node before, we update diff
        if (prev) diff = min(diff, abs(prev->val - root->val));
        prev = root;
        // moving to the right as much as we can
        if (root->right) dfs(root->right);
    }
    int getMinimumDifference(TreeNode *root) {
        dfs(root);
        return diff;
    }
};
// @lc code=end

