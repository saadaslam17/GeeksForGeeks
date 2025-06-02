/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        Node *zeroHead = new Node(-1);
        Node *oneHead = new Node(-1);
        Node *twoHead = new Node(-1);
        
        Node *zero = zeroHead;
        Node *one = oneHead;
        Node *two = twoHead;
        

        
        Node *temp = head;
        while(temp != NULL)
        {
            if(temp -> data == 0)
            {
                zero -> next = temp;
                zero = zero -> next;
                temp = temp -> next;
            }
            else if(temp -> data == 1)
            {
                one -> next = temp;
                one = one -> next;
                temp = temp -> next;
            }
            else
            {
                two -> next = temp;
                two = two -> next;
                temp = temp -> next;
            }
        }
        
            if(oneHead -> next == NULL)
            {
                zero -> next = twoHead -> next;
            }
            else
            {
                zero -> next = oneHead -> next;
            }
            
            one -> next = twoHead -> next;
            two -> next = NULL;
            
            return zeroHead -> next;
    }
};