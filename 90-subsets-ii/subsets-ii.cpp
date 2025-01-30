class Solution {
public:
    void getAllSubsets(vector<int>& nums, vector<int>& ans, int index, vector<vector<int>> &allSubsets) {
        if(index == nums.size()) {
            allSubsets.push_back(ans);
            return;
        }

        //include
        ans.push_back(nums[index]);
        getAllSubsets(nums, ans, index+1, allSubsets);

        ans.pop_back();

        int idx = index+1;
        while(idx < nums.size() && nums[idx] == nums[idx - 1]) idx++;

        //exclude
        getAllSubsets(nums, ans, idx, allSubsets);
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> allSubsets;
        vector<int> ans;

        getAllSubsets(nums, ans, 0, allSubsets);

        return allSubsets;

    }
};