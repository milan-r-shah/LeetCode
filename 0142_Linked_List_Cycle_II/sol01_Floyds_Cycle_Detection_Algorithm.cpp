/*
* 142: Linked List Cycle II
* https://leetcode.com/problems/linked-list-cycle-ii/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//
// Solution 01: Floyd's Cycle Detection Algorithm / Tortoise and Hare Algorithm
// Inspired from 1. https://youtu.be/zbozWoMgKW0
//               2. https://youtu.be/LUm2ABqAs1w
//

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        if (head == nullptr)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* start = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                while (slow != start) {
                    slow = slow->next;
                    start = start->next;
                }

                return start;
            }
        }
        return nullptr;
    }
};