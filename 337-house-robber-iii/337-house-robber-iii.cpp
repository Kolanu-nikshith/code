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
    int osum=0, esum=0;
    unordered_map<TreeNode* , int> m;
    int rob(TreeNode* root) {
        return solve(root);
    }
    int solve(TreeNode* root){
        if(!root) return 0;
        if(!root->left and !root->right)
            return root->val;
        if(m.find(root)!=m.end()) return m[root];
        
        int taken=0;int nottaken=0;
        
        taken +=root->val;
        if(root->left)
            taken+=solve(root->left->left)+solve(root->left->right);
        if(root->right)
            taken+= solve(root->right->left)+solve(root->right->right);            
        nottaken = solve(root->left) + solve(root->right);
        
        
        return m[root]=max(taken, nottaken);    
    
    
    }

};