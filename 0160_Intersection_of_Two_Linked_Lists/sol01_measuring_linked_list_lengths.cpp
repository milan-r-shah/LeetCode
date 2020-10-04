/*
 * Problem 160: Intersection of Two Linked Lists
 * https://leetcode.com/problems/intersection-of-two-linked-lists/
 */

//
// Solution 01 - measuring the length of both linked lists
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA = headA;
        ListNode *currB = headB;

        int lengthA = 0;
        int lengthB = 0;

        while (currA) {
            lengthA++;
            currA = currA->next;
        }

        while (currB) {
            lengthB++;
            currB = currB->next;
        }

        currA = headA;
        currB = headB;

        int diff = lengthA - lengthB;
        for (int i = 0; i < std::abs(diff); ++i) {
            if (diff > 0)
                currA = currA->next;
            else
                currB = currB->next;
        }

        while (currA != currB) {
            if (currA == currB)
                break;

            currA = currA->next;
            currB = currB->next;
        }

        return currA;
    }
};