/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
  public:

    // Function to return a list containing the preorder traversal of the tree.
    
        void solve(vector<int> &res, Node* root)
        {
            if(root == NULL) return;
            
            res.push_back(root -> data);
            solve(res, root -> left);
            solve(res, root -> right);
        }
        
        vector<int> preorder(Node* root)
        {
            vector<int> res;
            solve(res, root);
            return res;
        }
};