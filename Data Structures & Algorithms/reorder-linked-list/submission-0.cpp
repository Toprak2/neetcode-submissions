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
    void reorderList(ListNode* head) {
        
        ListNode *slow = head;
        ListNode *fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *rightHalf = slow->next;


        //reverse right half
        ListNode *prev = nullptr;
        while(rightHalf){
            ListNode *next = rightHalf->next;
            rightHalf->next = prev;
            prev = rightHalf;

            rightHalf = next;
        }

        rightHalf = prev;
        slow->next = nullptr;

        ListNode *leftHalf = head;

        while(leftHalf && rightHalf){
            cout << leftHalf->val << endl;
            cout << rightHalf->val << endl;

            ListNode *tmp1,*tmp2;
            tmp1 = leftHalf->next;
            tmp2 = rightHalf->next;
            
            leftHalf->next = rightHalf;
            rightHalf->next = tmp1;

            leftHalf = tmp1;
            rightHalf = tmp2;

        }


    }
};
