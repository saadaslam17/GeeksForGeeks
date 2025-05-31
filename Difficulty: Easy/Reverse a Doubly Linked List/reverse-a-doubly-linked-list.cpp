/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        if(head == NULL || head -> next == NULL) return head;
        
        DLLNode *curr = head;
        DLLNode *prev = NULL;
        
        while(curr != NULL)
        {
            prev = curr -> prev;
            curr -> prev = curr -> next;
            curr -> next = prev;
            curr = curr -> prev;
        }
        return prev -> prev;
    }
};