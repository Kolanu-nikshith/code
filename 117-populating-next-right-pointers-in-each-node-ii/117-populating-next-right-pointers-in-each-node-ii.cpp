/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    unordered_map<int, vector<Node*>> m;
    int minh=INT_MAX, maxh = INT_MIN;
    Node* connect(Node* root) {
        inorder(root, 0);
//        cout<<maxh<<endl;
        for(int i=0;i<maxh+1;i++){
            for(int j=0;j<m[i].size();j++){
                if(j+1 == m[i].size())
                    m[i][j]->next = NULL;
                else
                    m[i][j]->next = m[i][j+1];
                // m[i][j]->next = m[i][j+1]? m[i][j+1]: NULL;
            }
        }
        return root;
    }
    void inorder(Node* root, int h){
        if(root){
            inorder(root->left, h+1);
            m[h].push_back(root);
            maxh = max(maxh, h);
            inorder(root->right, h+1);
        }
    }
    
};