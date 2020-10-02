/*
 * Problem 155: Min Stack
 * https://leetcode.com/problems/min-stack/
 */

//
// Solution 01 - using a vector
//

class MinStack {
    std::vector<int> nums;

public:
    /** initialize your data structure here. */
    MinStack() {
    }

    void push(int x) {
        nums.push_back(x);
    }

    void pop() {
        nums.pop_back();
    }

    int top() {
        return nums[nums.size() - 1];
    }

    int getMin() {
        int min = INT_MAX;
        for (auto& elem : nums) {
            if (elem < min)
                min = elem;
        }
        return min;
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