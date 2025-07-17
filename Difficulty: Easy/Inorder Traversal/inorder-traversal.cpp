/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> res;
        solve(res,root);
        return res;
    }
    
    void solve(vector<int> &res, Node* root)
    {
        if(root == NULL) return;
        
        solve(res, root -> left);
        res.push_back(root -> data);
        solve(res, root -> right);
    }
};