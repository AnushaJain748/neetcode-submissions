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
    int height(TreeNode* root){
        if(root==nullptr)
        return 0;
        return max(1+height(root->left),1+height(root->right));
    }
    bool isBalanced(TreeNode* root) {
                if(root==nullptr)
        return true;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        if(abs(leftHeight-rightHeight)>1)
        return false;
        else
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};
