/*
 * Problem 160: Intersection of Two Linked Lists
 * https://leetcode.com/problems/intersection-of-two-linked-lists/
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
// Solution 03a - without measuring the length of both linked lists
// Inspired from: https://leetcode.com/problems/intersection-of-two-linked-lists/discuss/49785/Java-solution-without-knowing-the-difference-in-len!
//

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA = headA;
        ListNode *currB = headB;

        while (currA != currB) {
            // currA = (currA != nullptr ? currA->next : headB);
            // currB = (currB != nullptr ? currB->next : headA);

            if (currA != nullptr)
                currA = currA->next;
            else
                currA = headB;

            if (currB != nullptr)
                currB = currB->next;
            else
                currB = headA;
        }

        return currA;
    }
};

//
// Solution 03b
//

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA = headA;
        ListNode *currB = headB;

        while (currA != currB) {
            currA = (currA != nullptr ? currA->next : headB);
            currB = (currB != nullptr ? currB->next : headA);

            // currA = (currA == nullptr ? headB : currA->next);
            // currB = (currB == nullptr ? headA : currB->next);
        }

        return currA;
    }
};

//
// Solution 03c
//

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA = headA;
        ListNode *currB = headB;

        while (currA != currB) {
            currA = (currA ? currA->next : headB);
            currB = (currB ? currB->next : headA);
        }

        return currA;
    }
};
