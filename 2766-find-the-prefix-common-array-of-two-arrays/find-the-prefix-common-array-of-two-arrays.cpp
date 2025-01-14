class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();

        vector<int> result(n);

        for(int i = 0; i<n; i++) {
           int count = 0;
           
            for(int x = 0; x <= i; x++) {
                for(int y = 0; y <= i; y++) {
                    if(A[x] == B[y]){
                        count++;
                        break;
                    }
                }
            }
             result[i] = count;
        }
        return result;
    }
};