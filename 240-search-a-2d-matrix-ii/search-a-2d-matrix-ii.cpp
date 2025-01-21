class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();

        int rows = 0, cols = n-1;
        while(rows < m && cols >= 0) {
            if(target == matrix[rows][cols]) {
                return true;
            } else if(target < matrix[rows][cols]){
                cols--;
            } else {
                rows++;
            }
        }

        return false;
    }
};