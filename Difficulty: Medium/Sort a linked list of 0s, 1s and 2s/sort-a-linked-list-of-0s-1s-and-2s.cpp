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
    int zero = 0, one = 0, two = 0;

    Node* temp = head;

    // Count occurrences of 0s, 1s, and 2s
    while (temp != nullptr) {
        if (temp->data == 0) zero++;
        else if (temp->data == 1) one++;
        else two++;
        temp = temp->next;
    }

    // Reassign values in the list
    temp = head;
    while (temp != nullptr) {
        if (zero > 0) {
            temp->data = 0;
            zero--;
        } else if (one > 0) {
            temp->data = 1;
            one--;
        } else {
            temp->data = 2;
            two--;
        }
        temp = temp->next; // ✅ move to next node
    }

    return head;
}
};