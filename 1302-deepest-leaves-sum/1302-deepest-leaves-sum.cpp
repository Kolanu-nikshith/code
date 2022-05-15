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
    int maxh=INT_MIN;
    int sum=0;
    int deepestLeavesSum(TreeNode* root) {
        inorder(root, 0);
        inorder2(root, 0);
        return sum;
    }
    void inorder(TreeNode* root, int h){
        if(root){
            inorder(root->left, h+1);
            if(h>maxh) maxh=h;
            inorder(root->right, h+1);
        }
    }
    
    void inorder2(TreeNode* root, int h){
        if(root){
            inorder2(root->left, h+1);
            if(h==maxh) sum+=root->val;
            inorder2(root->right, h+1);
        }
    }

    
    
};