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
    int maxh=0;
    int sum=0;
    int deepestLeavesSum(TreeNode* root) {
        // inorder(root, 0);
        // inorder2(root, 0);
        solver(root, 0);
        return sum;
    }

    void solver(TreeNode* root, int currh){
        if(!root) return ;
        //at leaf, if you see new height element, then it is the first time you have seen it. so sum = root->val.
        //then if of same level if you see again, then add it up.
        
        if(!root->left and !root->right){
            if(currh> maxh){
                maxh = currh;
                sum = root->val;
            }
            else if(currh == maxh){
                sum+=root->val;
            }
        }
        solver(root->left, currh+1);
        solver(root->right, currh+1);        
    }
    
    
    
    
    
    
    
    
    
//     void inorder(TreeNode* root, int h){
//         if(root){
//             inorder(root->left, h+1);
//             if(h>maxh) maxh=h;
//             inorder(root->right, h+1);
//         }
//     }
    
//     void inorder2(TreeNode* root, int h){
//         if(root){
//             inorder2(root->left, h+1);
//             if(h==maxh) sum+=root->val;
//             inorder2(root->right, h+1);
//         }
//     }

    
    
    
    
};