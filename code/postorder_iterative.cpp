//use while and stack.
//R l, r only for post order as everything works s in reverse way.
//atlast reverse the entire answer vector.

//for preorder just use R,r,l
//for postorder just use R, l, r and reverse the answer.

vector<int> Solution::postorderTraversal(TreeNode* A) {
    stack<TreeNode *> s;
    s.push(A);
    vector<int> v;
    while(!s.empty()){
        TreeNode *temp = s.top();
        v.push_back(temp->val);
        s.pop();
        if(temp->left) s.push(temp->left);
        if(temp->right) s.push(temp->right);
        
    }
    reverse(v.begin(), v.end());
    return v;
    
}
