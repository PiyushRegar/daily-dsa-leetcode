/*
 * LeetCode Problem 1769: Minimum Number of Operations to Move All Balls to Each Box

 * 
 * Problem Description:
 * You have n boxes, and some of the boxes contain balls. For each box, calculate the 
 * minimum number of operations required to move all balls to that box. An operation 
 * is defined as moving one ball one box to the left or right.
 */

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> res(n); // 
        int behind = 0;     
        int ahead = 0;   

        // Calculate the initial operations and count of balls ahead
        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                ahead++;       
                res[0] += i;   
            }
        }

        // Adjust counts for the first box
        if (boxes[0] == '1') {
            ahead--; 
            behind++; 
        }

        // Calculate operations for the rest of the boxes
        for (int i = 1; i < n; i++) {
            // Update the operations for the current box based on previous box
            res[i] = res[i - 1] - ahead + behind;

            // Update ahead and behind counts if the current box contains a ball
            if (boxes[i] == '1') {
                ahead--;
                behind++;
            }
        }

        return res;
    }
};