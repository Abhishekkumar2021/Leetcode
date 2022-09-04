/*
 * @lc app=leetcode id=501 lang=cpp
 *
 * [501] Find Mode in Binary Search Tree
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
    map<int,int> m;
    void f(TreeNode* root){
        if(root==NULL) return;
        f(root->left);
        m[root->val]++;
        f(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        f(root);
        auto it = m.end();
        cout<<it->second;
        
    }
};
// @lc code=end

