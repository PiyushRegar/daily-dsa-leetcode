class Solution {
public:
    bool check(vector<int>& nums) {
        int rotationCount = 0;
        int size = nums.size();

        // Count the number of times the array is not sorted in increasing order
        for (int i = 1; i < size; i++) {
            if (nums[i - 1] > nums[i]) {
                rotationCount++;
            }
        }

        // Check the last element with the first to handle circular order
        if (nums[size - 1] > nums[0]) {
            rotationCount++;
        }

        // The array can be rotated sorted if there is at most one break point
        return rotationCount <= 1;
    }
};
