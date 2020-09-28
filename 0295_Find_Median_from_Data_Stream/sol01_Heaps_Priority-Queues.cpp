/*
 * Problem 295: Find Median from Data Stream 
 * https://leetcode.com/problems/find-median-from-data-stream/
 */

//
// Solution 01: using two priority queues
// The first one (max heap) devides the entire list of numbers into lower half while
// the second one (min heap) devides the list into upper half
//
// Inspired from: https://youtu.be/EcNbRjEcb14
//

class MedianFinder {
    std::priority_queue<int> max_heap;
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

public:
    /** initialize your data structure here. */
    MedianFinder() {
    }

    void addNum(int num) {
        // add a number to max_heap if it's empty or the the number is less than the 
        // max number (i.e. max_heap.top()) in max_heap
        if (max_heap.empty() || max_heap.top() > num)
            max_heap.push(num);
        else
            min_heap.push(num);

        // keep the difference in size of both priority_queues not more than 1
        if (max_heap.size() > min_heap.size() + 1) {
            min_heap.push(max_heap.top());
            max_heap.pop();
        } else if (min_heap.size() > max_heap.size() + 1) {
            max_heap.push(min_heap.top());
            min_heap.pop();
        }
    }

    double findMedian() {
        if (max_heap.size() > min_heap.size())
            return max_heap.top();
        else if (max_heap.size() < min_heap.size())
            return min_heap.top();
        else
            return ((max_heap.top() + min_heap.top()) / 2.0);
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */