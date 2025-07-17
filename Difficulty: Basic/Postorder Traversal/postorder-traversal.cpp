/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */
class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
        // Your code here
        vector<int> res;
        solve(res, root);
        return res;
    }
    
    void solve(vector<int> &res, Node* root)
    {
        if(root == NULL) return;
        solve(res, root -> left);
        solve(res, root -> right);
        res.push_back(root -> data);
    }
};