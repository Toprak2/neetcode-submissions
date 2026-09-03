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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode head;
        ListNode *curr = &head;

        int carry = 0;
        while(l1 && l2){

            int sum = l1->val + l2->val + carry;
            carry = sum/10;
            sum = sum % 10;

            ListNode *next = new ListNode(sum);
            curr->next = next;
            curr = next;

            l1 = l1->next;
            l2 = l2->next;

        }


        if(l1){
            while(l1){
                if(carry!=0){
                    int sum = l1->val + carry;
                    carry = sum/10;
                    sum = sum % 10;
                    ListNode *next = new ListNode(sum);
                    curr->next = next;
                    curr = next;
                }
                else{
                    curr->next=l1;
                    break;
                }

                l1 = l1->next;
            }

        }
        else if(l2){
            while(l2){
                if(carry!=0){
                    int sum = l2->val + carry;
                    carry = sum/10;
                    sum = sum % 10;
                    ListNode *next = new ListNode(sum);
                    curr->next = next;
                    curr = next;

                    l2=l2->next;
                }
                else{
                    curr->next=l2;
                    break;
                }
            }
        }

        if(carry !=0){
            ListNode *next = new ListNode(carry);
            curr->next = next;
        }

        return head.next;

    }
};
