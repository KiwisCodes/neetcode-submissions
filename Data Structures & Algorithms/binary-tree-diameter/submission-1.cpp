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
private:
public:
    int result = 0;
    int depthOfBinaryTreeHelper(TreeNode* root){
        if(root == nullptr) return 0;
        int leftDepth = depthOfBinaryTreeHelper(root->left);
        int rightDepth = depthOfBinaryTreeHelper(root->right);
        result = max(result, leftDepth+rightDepth);
        result = max(result, max(leftDepth, rightDepth));
        return max(leftDepth, rightDepth) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        depthOfBinaryTreeHelper(root);
        return result;
    }
};
