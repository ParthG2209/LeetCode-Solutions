// Title: Linked List Cycle II\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/linked-list-cycle-ii/\n\n/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL and fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow ==fast){
                ListNode* temp = head;
                while(temp != slow){
                    temp = temp->next;
                    slow = slow->next;
                }
                return temp;


            }
        }
        return NULL;

        
    }
};