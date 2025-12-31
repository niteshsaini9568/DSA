class Solution {
  public:
    bool isPalindrome(Node *head) {
        if (!head || !head->next) return true;

        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast) slow = slow->next;

        Node* prev = nullptr;
        Node* curr = slow;

        while (curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        Node* left = head;
        Node* right = prev;

        while (right) {
            if (left->data != right->data) return false;
            left = left->next;
            right = right->next;
        }

        return true;
    }
};
