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
        inorder(original, cloned, target );
        return ans;
    }
    void inorder(TreeNode* root, TreeNode* cloned, TreeNode* target){
        if(root){
            inorder(root->left, cloned->left, target);
            if(root == target) ans=cloned;
            inorder(root->right, cloned->right, target);
            
        }
    }
};