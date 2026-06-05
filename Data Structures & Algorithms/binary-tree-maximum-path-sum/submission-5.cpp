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
int total=INT_MIN;
    int dfs(TreeNode* root) {
        if (root == nullptr) return 0;
        
        // Calculate left and right max path sum, ignoring negative sums
        int leftMax = max(0, dfs(root->left));
        int rightMax = max(0, dfs(root->right));
        
        // Update the total max path sum
        total = max(total, root->val + leftMax + rightMax);
        
        // Return the max path sum including the current node and one of its subtrees
        return root->val + max(leftMax, rightMax);
    }
   int maxPathSum(TreeNode* root) {
        dfs(root);
        return total;
    }
};
