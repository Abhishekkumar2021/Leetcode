/*
 * @lc app=leetcode id=872 lang=cpp
 *
 * [872] Leaf-Similar Trees
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
    void leafvalue(TreeNode*node,vector<int> &ans){
        if(node==NULL) return;
        if(node->left==NULL && node->right==NULL){
            ans.push_back(node->val);
            return;
        }
        leafvalue(node->left,ans);
        leafvalue(node->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        leafvalue(root1,v1);
        leafvalue(root2,v2);
        return v1==v2;
    }
};
// @lc code=end

