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
    ListNode* middleNode(ListNode* head) {
        ListNode*slow=head;//slow=1
        ListNode*fast=head;//head=1
        while(fast&&fast->next){
            slow=slow->next; //2,3,4
            fast=fast->next->next;//3,5,null
        }
        return slow;//slow=3 . And the linked list will start from the point
    }
};