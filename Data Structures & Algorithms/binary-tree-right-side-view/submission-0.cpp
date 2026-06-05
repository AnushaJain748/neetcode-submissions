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
    vector<int> rightSideView(TreeNode* root) {
         if(root==nullptr)
        return {};
        queue<TreeNode*> q;
        vector<int> v;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int> sub;
            for(int i=0;i<s;i++){
                sub.push_back(q.front()->val);
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left!=nullptr)
                q.push(temp->left);
                if(temp->right!=nullptr)
                q.push(temp->right);
            }
            v.push_back(sub[sub.size()-1]);
        }
      return v;
    }
};
