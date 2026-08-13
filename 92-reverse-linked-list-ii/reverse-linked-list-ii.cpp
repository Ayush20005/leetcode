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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode*dummy=new ListNode(0);
        dummy->next=head;
        ListNode*before=dummy;
        for(int i=0;i<left-1;i++){
            before=before->next;
        }
        ListNode*curr=before->next;
        ListNode*prev=nullptr;
        for(int i=0;i<right-left+1;i++){
            ListNode*next=curr->next;
            curr->next=prev; //1->null.
            prev=curr;
            curr=next; //this will give 4->3->2->null
        }
        //here the current is =5
        ListNode*tail=before->next;//before->next=2. tail=2
        before->next=prev;//this will point 2 to the prev
          tail->next=curr;//2->5(tail->next=2;curr=5)
          return dummy->next;
    }
};