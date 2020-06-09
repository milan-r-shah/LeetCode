// LeetCode 
// Problem 997: Find the Town Judge
// https://leetcode.com/problems/find-the-town-judge/
// Difficulty: Easy
// Related Topics: Graph


// For this problem, the simple logic is to keep the count of all the trusts 
// i.e. who trusts on who and who is being by whom
// 
// So, for that 
// 1. we would increase the count for a person if he is being trusted by another person
// 2. we would decrease the count for a perons if he trust another person
// at the end a person with a count = N-1, if any, would be the final answer
// otherwise answer would be -1



// Solution 1: using Map
// Runtime: ~444 ms
// Memory:  ~61.9 MB

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N==1)
            return 1;
        
        int ans = -1;
        std::map<int, int> m;
        
        for(auto const& person : trust) {
            m[person[1]]++;
            m[person[0]]--;
        }
        
        for(auto const& elem : m) {           
            if (elem.second == N-1) {
                ans = elem.first;
                break;
            }
        }
        
        return ans;
    }
};




// Solution 2: using Vector
// Runtime: ~384 ms
// Memory:  ~61 MB

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if(N==1)
            return 1;
        
        std::vector<int> count(N+1, 0);
        
        for(auto const &person : trust) {
            count[person[1]]++;
            count[person[0]]--;
        }
        
        for(int i=0; i<=N; ++i) {
            if(count[i] == N-1)
                return i;
        }
        
        return -1;
    }
};