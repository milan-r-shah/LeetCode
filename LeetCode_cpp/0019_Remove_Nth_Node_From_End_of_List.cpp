// LeetCode 
// Problem 19. Remove Nth Node From End of List
// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Difficulty: Medium
// Related Topics: Linked List, Two Pointers


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

/*
The difference between the final node and the to_be_delete node is N. 
And here the assumption is that n is always valid.
'fast' pointer points to the node which is N step away from the to_be_delete node.
'slow' pointer points to the to_be_delete node.

The algorithms is described as below:
1. Firstly, move fast pointer N step forward.
2. Secondly,move fast and slow pointers simultaneously one step a time forward till 
   the fast pointer reach the end, which will cause the slow pointer points to the 
   previous node of the to_be_delete node.
3. Finally, slow->next = slow->next->next.
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        while(n--) {
            fast = fast->next;
        }
        
        if(fast == nullptr)
            return head->next;
        
        while(fast->next) {
            fast = fast->next;
            slow = slow->next;
        }
        
        ListNode* toBeDeleted = slow->next;
        slow->next = (slow->next)->next;
        
        delete toBeDeleted;
        
        return head;
    }
};