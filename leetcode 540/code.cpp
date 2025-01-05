# LeetCode Problem 540: Single Element in a Sorted Array

## Problem Description
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once. Find this single element that appears only once.

Your solution must run in `O(log n)` time and use `O(1)` extra space.


//This solution uses a binary search approach to achieve an `O(log n)` time complexity. The algorithm checks if the mid-point satisfies the unique element condition or adjusts the search range based on the sorted array's property.
// --- here is the leetcode 540 solution of my code ---------




class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();

        if(n == 1) return A[0];

        int st = 0, end = n-1;
        while(st <= end){
            int mid = st + (end - st)/2;

            if(mid == 0 && A[0] != A[1]) return A[mid];
            if(mid == n-1 && A[n-1] != A[n-2]) return A[mid];

            if(A[mid-1] != A[mid] && A[mid] != A[mid + 1]) return A[mid];

            if(mid % 2 == 0){
                if(A[mid-1] == A[mid]){
                    end = mid -1;
                } else{
                    st = mid + 1;
                }
            } else {
                if(A[mid-1] == A[mid]){
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
