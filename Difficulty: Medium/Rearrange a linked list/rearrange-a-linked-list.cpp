/* Node structure

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    void rearrangeEvenOdd(Node *head) {
        // Your Code here
        vector<int> arr;
        
        Node *temp = head;
        while(temp != NULL && temp -> next != NULL)
        {
            arr.push_back(temp -> data);
            temp = temp -> next -> next;
        }
        
        if(temp) arr.push_back(temp -> data);
        
        temp = head -> next;
        while(temp != NULL && temp -> next != NULL)
        {
            arr.push_back(temp -> data);
            temp = temp -> next -> next;
        }
        
        if(temp) arr.push_back(temp -> data);
        
        temp = head;
        int i = 0;
        while(temp != NULL)
        {
            temp -> data = arr[i];
            temp = temp -> next;
            i++;
        }
    }
};