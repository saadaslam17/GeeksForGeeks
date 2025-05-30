/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head == NULL || head -> next == NULL) return NULL;
        
        if(x == 1)
        {    
        Node *back = head;
        head = head -> next;
        head -> prev = NULL;
        delete back;
        return head;
        }
        
        Node* temp = head;
    int count = 1;
    while (temp != NULL && count < x) {
        temp = temp->next;
        count++;
    }

    // If x is beyond the length of the list
    if (temp == NULL) return head;

    // Remove temp node
    if (temp->prev != NULL) temp->prev->next = temp->next;
    if (temp->next != NULL) temp->next->prev = temp->prev;

    delete temp;
    return head;
    }
};