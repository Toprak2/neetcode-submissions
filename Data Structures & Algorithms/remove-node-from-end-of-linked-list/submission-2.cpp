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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if(!head->next){
            return nullptr;
        }

        int len=0;

        ListNode *tmp= head;

        while(tmp){
            tmp = tmp->next;
            len++;
        }

        tmp = head;
        cout << len << endl;

        if(len-n-1 < 0){
            head= head->next;
            return head;
        }

        for(int i = len-n-1;i>0;i--){
            tmp= tmp->next;
        }

        tmp->next = tmp->next->next;
        
        return head;
    }
};
