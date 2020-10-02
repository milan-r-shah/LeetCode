/*
 * Problem 155: Min Stack
 * https://leetcode.com/problems/min-stack/
 */

//
// Solution 02a - using two stacks
// One stack will keep track of all the pushed numbers
// while the another one will keep track of only minimum numbers
//
// Inspired from:
// 1. https://youtu.be/WxCuL3jleUA
// 2. https://leetcode.com/problems/min-stack/discuss/49016/C%2B%2B-using-two-stacks-quite-short-and-easy-to-understand
//

class MinStack {
    std::stack<int> stack;
    std::stack<int> min_stack;

public:
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        stack.push(x);

        if (min_stack.empty() || x <= min_stack.top())
            min_stack.push(x);
    }

    void pop() {
        if (stack.top() == min_stack.top())
            min_stack.pop();

        stack.pop();
    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

//
// Solution 02b - using two stacks
//

class MinStack {
    std::stack<int> stack;
    std::stack<int> min_stack;

public:
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        stack.push(x);

        if (min_stack.empty() || x <= getMin())
            min_stack.push(x);
    }

    void pop() {
        if (stack.top() == getMin())
            min_stack.pop();

        stack.pop();
    }

    int top() {
        return stack.top();
    }

    int getMin() {
        return min_stack.top();
    }
};