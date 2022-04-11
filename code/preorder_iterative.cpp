//preorder iterative
//push into stack the node not values. pop root and push first right, next left as stack works in reverse way
//push values into vector
vector<int> Solution::preorderTraversal(TreeNode* A) {
    
    stack<TreeNode *> s;
    vector<int> v;
    s.push(A);
    while(!s.empty()){
        TreeNode *temp = s.top();
        v.push_back(temp->val);
        s.pop();
        if(temp->right) s.push(temp->right);
        if(temp->left) s.push(temp->left);
    }
    return v;
    
    
}
