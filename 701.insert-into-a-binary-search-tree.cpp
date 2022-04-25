/*
 * @lc app=leetcode id=701 lang=cpp
 *
 * [701] Insert into a Binary Search Tree
 */

// @lc code=start
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // if root is null
        if(!root) return new TreeNode(val);
        insert(root, val);
        return root;
    }
    void insert(TreeNode* root, int val){
        if(val > root->val){
            if(!root->right){
                root->right = new TreeNode(val);
            }
            else{
                 insert(root->right, val);
            }
        }
        else if (val < root->val){
            if(!root->left){
                root->left = new TreeNode(val);
            }
            else{
                  insert(root->left, val);
            }
            
        }
    }
};
// @lc code=end

