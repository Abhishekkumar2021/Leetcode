/*
 * @lc app=leetcode id=1022 lang=cpp
 *
 * [1022] Sum of Root To Leaf Binary Numbers
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
    void f(TreeNode* node, vector<int> path, int &sum){
        if(node==NULL) return;
        path.push_back(node->val);
        if(node->left==NULL && node->right==NULL){
            int pow = 1;
            for(int i=path.size()-1; i>=0; i--){
                sum += path[i]*pow;
                pow*=2;
            }
            return;
        }
        f(node->left, path,sum);
        f(node->right, path,sum);
    }
    int sumRootToLeaf(TreeNode* root) {
        int sum = 0;
        vector<int> path;
        f(root,path,sum);
        return sum;
    }
};
// @lc code=end

