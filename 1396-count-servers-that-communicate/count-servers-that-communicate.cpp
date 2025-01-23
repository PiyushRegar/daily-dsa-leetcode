class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){

                    bool canCommunicate = false;

                    for(int col=0; col<n; col++){
                        if(grid[i][col] == 1 && col != j){

                            canCommunicate = true;
                            break;
                        }
                    }

                    if(canCommunicate == true) {
                        count++;
                    } else {

                    for(int row = 0; row<m; row++){
                        if(grid[row][j] == 1 && row != i){

                            canCommunicate = true;
                            break;
                        }
                    }

                    if(canCommunicate == true)
                    count++;
                }
            }
        }
     }
        
        return count;
    }
}; 