/*
* Problem 141: Linked List Cycle
* https://leetcode.com/problems/linked-list-cycle/
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
// Solution 01a: Floyd's Cycle Detection Algorithm / Tortoise and Hare Algorithm
// Inspired from 1. https://youtu.be/zbozWoMgKW0
//               2. https://leetcode.com/problems/linked-list-cycle/discuss/44489/O(1)-Space-Solution
//

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr)
            return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return true;
        }

        return false;
    }
};

//
// Solution 01b: Floyd's Cycle Detection Algorithm / Tortoise and Hare Algorithm
//

class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr)
            return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
    }
};