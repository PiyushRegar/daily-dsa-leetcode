/*
    LeetCode Problem: 704. Binary Search
    Problem Description:
    Given a sorted array of integers `nums` and a target value `target`, 
    return the index of the target if it exists. Otherwise, return -1.

    You must write an algorithm with O(log n) runtime complexity.
  */

// ------------------ Leetcode Solution -----------------------------

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size()-1;

        while(st <= end){
           int mid = st + (end - st)/2;

            if(nums[mid] == target){
                return mid;
            } else if(nums[mid] < target){
                st = mid + 1;
            } else{
                end = mid - 1;
            }
        }

        return -1;
    }
};  
