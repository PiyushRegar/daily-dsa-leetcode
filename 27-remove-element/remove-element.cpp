class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int newIndex = 0;

        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != val){
                nums[newIndex++] = nums[i];
            }
        }

        return newIndex;
    }
};