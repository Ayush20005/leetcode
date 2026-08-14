/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* sorted = nullptr;
        ListNode* curr = head;

        while (curr) {

            // Save next node before changing curr->next
            ListNode* nextNode = curr->next;

            // Insert curr at beginning
            // if sorted is empty or curr is smaller
            if (sorted == nullptr || curr->val < sorted->val) {
                curr->next = sorted;
                sorted = curr;
            }

            else {

                ListNode* temp = sorted;

                // Find correct position
                while (temp->next != nullptr &&
                       temp->next->val < curr->val) {
                    temp = temp->next;
                }

                // Insert curr
                curr->next = temp->next;
                temp->next = curr;
            }

            curr = nextNode;
        }

        return sorted;
    }
};