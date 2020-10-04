/*
 * Problem 160: Intersection of Two Linked Lists
 * https://leetcode.com/problems/intersection-of-two-linked-lists/
 */

//
// Solution 02 - using two stacks
// Inspired from: https://youtu.be/ycIMmSmkQbo
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
        if (headA == nullptr || headB == nullptr)
            return nullptr;

        std::stack<ListNode *> stackA;
        std::stack<ListNode *> stackB;

        ListNode *currA = headA;
        ListNode *currB = headB;

        while (currA) {
            stackA.push(currA);
            currA = currA->next;
        }

        while (currB) {
            stackB.push(currB);
            currB = currB->next;
        }

        while (stackA.top() == stackB.top()) {
            currA = stackA.top();

            stackA.pop();
            stackB.pop();

            if (stackA.empty() || stackB.empty())
                break;
        }

        return currA;
    }
};