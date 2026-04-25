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
    int depthOfBinaryTreeHelper(TreeNode* root){
        if(root == nullptr) return 0;
        int leftDepth = depthOfBinaryTreeHelper(root->left);
        int rightDepth = depthOfBinaryTreeHelper(root->right);
        return max(leftDepth, rightDepth) + 1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        int leftDepth = depthOfBinaryTreeHelper(root->left);
        int rightDepth = depthOfBinaryTreeHelper(root->right);
        return leftDepth + rightDepth;
    }
};
