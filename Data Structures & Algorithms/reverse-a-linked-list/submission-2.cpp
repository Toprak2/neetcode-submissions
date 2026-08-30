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

    /* Iteration
    ListNode* reverseList(ListNode* head) {
        
        if(head == nullptr){
            return nullptr;
        }

        ListNode *currNode = head;
        ListNode *prevNode = nullptr;

        while(currNode != nullptr){

            ListNode *nextNode = currNode->next;

            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }

        return prevNode;

    }
    */

    //recursion
    ListNode* reverseList(ListNode* head) {
        if (!head) {
            return nullptr;
        }

        ListNode *newHead = head;
        if(head->next != nullptr){
            newHead = reverseList(head->next);
            head->next->next = head;
            head->next = nullptr;
        }
        
        return newHead;

    }

};
