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
    bool hasCycle(ListNode* head) {
        
        if(!head){
            return false;
        }
        
        ListNode *slow =head;
        ListNode *fast = head->next;

        while(fast){

            if(fast == slow){
                return true;
            }

            if(!fast->next || !fast->next->next){
                
                return false;
            }
            fast = fast->next->next;
            slow = slow->next;

        }

        return false;

    }
};
