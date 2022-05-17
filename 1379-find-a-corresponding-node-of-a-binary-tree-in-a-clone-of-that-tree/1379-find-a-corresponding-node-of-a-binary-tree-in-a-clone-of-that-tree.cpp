/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inorder(cloned, target->val);
        return ans;
    }
    void inorder(TreeNode* root, int n){
        if(root){
            inorder(root->left, n);
            if(root->val == n) ans=root;
            inorder(root->right, n);
            
        }
    }
};