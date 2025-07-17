/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        queue<Node*> q;
        vector<vector<int>> ans;
        
        if(root) q.push(root);
        
        while(!q.empty())
        {
            vector<int> temp;
            int size = q.size();
            
            while(size--)
            {
                auto node = q.front();
                q.pop();
                temp.push_back(node -> data);
                
                if(node -> left) q.push(node -> left);
                if(node -> right) q.push(node -> right);   
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};