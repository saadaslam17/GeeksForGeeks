/*

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
    Node* reverse(Node *head)
    {
        if(head == NULL || head -> next == NULL) return head;
        
        Node *newHead = reverse(head -> next);
        Node *front = head -> next;
        front -> next = head;
        head -> next = NULL;
        return newHead;
    }

class Solution {
  public:
    Node* addOne(Node* head) {
        
        head = reverse(head);
        
        Node *temp = head;
        int carry = 1;
        while(temp != NULL)
        {
            temp -> data += carry;
            
            if(temp -> data < 10)
            {
                carry = 0;
                break;
            }
            else
            {
                temp -> data = 0;
                carry = 1;
            }
            temp = temp -> next;
        }
        
        if(carry == 1)
        {
            Node *newNode = new Node(1);
            head = reverse(head);
            newNode -> next = head;
            return newNode;
        }
        
        head = reverse(head);
        return head;
    }
};