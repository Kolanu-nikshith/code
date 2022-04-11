//if current node is not null or stack is not empty run the loop.
//go to the left most node while pushing all the nodes encountered.
//so now left most node is NULL. Then pop from stack and push_back its value.
//after left is over, Root we pushed into vector. Go right one step and let the while loop continue.


//Go left using while loop until null. Pop from stack one root as curr is now NULL.
//Now, Go only one step right after pop from stack.


vector<int> Solution::inOrderTraversal(TreeNode* A) {
    stack<TreeNode *> s;
    vector<int> v;
    TreeNode *curr = A;
    while(curr!=NULL || !s.empty()){
      while(curr){
      s.push(curr);
        curr=curr->left;
      }
      curr = s.top();
      v.push_back(curr->val);
      s.pop();
      curr = curr->right;
    }
    return v;
}
