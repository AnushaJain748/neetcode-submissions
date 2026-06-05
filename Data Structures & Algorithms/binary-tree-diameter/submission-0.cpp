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
int total=0;
int solve(TreeNode* root){
if(root==nullptr)
        return 0;
        total=max(total,solve(root->left)+solve(root->right));
        return 1+max(solve(root->left),solve(root->right));
}
    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return total;
    }
};
