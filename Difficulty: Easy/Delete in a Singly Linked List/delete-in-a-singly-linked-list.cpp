/* Link list Node
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
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        if(head == NULL || head -> next == NULL) return head;
        
        if(x == 1)
        {
            head = head -> next;
            return head;   
        }
        
        int count = 1;
        Node *temp = head;
        Node *prev = NULL;
        
        while(temp != NULL)
        {
            if(count == x)
            {
                prev -> next = prev -> next -> next;
                break;
            }
            count++;
            prev = temp;
            temp = temp -> next;
        }
        return head;
    }
};