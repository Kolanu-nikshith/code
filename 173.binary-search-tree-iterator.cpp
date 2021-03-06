/*
 * @lc app=leetcode id=173 lang=cpp
 *
 * [173] Binary Search Tree Iterator
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
// class BSTIterator {
// public:
//     BSTIterator(TreeNode* root) {
        
//     }
    
//     int next() {
        
//     }
    
//     bool hasNext() {
        
//     }
// };

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
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
class BSTIterator {
public:
vector<TreeNode*> v;int i=0;
        stack<TreeNode*> s;

    BSTIterator(TreeNode* root) {
        pushstack(root);        
//        inorder(root);
    }
    // void inorder(TreeNode* root){
    //     if(root){
    //         inorder(root->left);
    //         v.push_back(root);
    //         inorder(root->right);
    //     }
    // }
    
    int next() {
        // return v[i++]->val;
        TreeNode* ele = s.top();
        s.pop();
        pushstack(ele->right);
        return ele->val;
    }
    
    bool hasNext() {
        // return i<v.size();
        return s.size() >0;
    }
    
    void pushstack(TreeNode* root){
        while(root){
            s.push(root);
            root=root->left;
        }
    }    
    
    };

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */


// @lc code=end

