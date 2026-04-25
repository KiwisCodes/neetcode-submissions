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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        int leftDepth=0, rightDepth=0;
        if(root->left) leftDepth = maxDepth(root->left);
        // cout<<leftDepth<<"\n";
        if(root->right) rightDepth = maxDepth(root->right);
        // cout<<rightDepth<<"\n";
        return max(leftDepth, rightDepth)+1;
    }
};
