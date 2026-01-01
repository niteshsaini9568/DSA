/* Linked List Node Structure
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        // Initialize two pointers
        Node* ptr1 = head1;
        Node* ptr2 = head2;

        // Traverse until the pointers meet
        while (ptr1 != ptr2) {
            // If ptr1 reaches end, redirect to head2
            // Otherwise, move next
            if (ptr1 == NULL) {
                ptr1 = head2;
            } else {
                ptr1 = ptr1->next;
            }

         
            if (ptr2 == NULL) {
                ptr2 = head1;
            } else {
                ptr2 = ptr2->next;
            }
        }

        // Return the intersection node (or NULL if they never meet)
        return ptr1;
    }
};