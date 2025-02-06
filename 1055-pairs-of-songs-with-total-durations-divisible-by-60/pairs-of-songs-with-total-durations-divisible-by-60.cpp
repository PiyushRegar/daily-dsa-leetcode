class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>rem (60, 0);
        int count = 0;

        for(int t : time) {
            int r = t % 60;
            int complement = (r == 0) ? 0 : 60 - r;

            count += rem[complement];
            rem[r]++;
        }

        return count;
    }
};