class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();

        int st = 0;
        int end = n-1;

        int mid;

        int pos = -1;
        while(st <= end){
            mid = st + (end - st)/2;

            if(letters[mid] > target) {
                pos = mid;
                end = mid-1;
            } else{
                st = mid + 1;
            }
        }
        if(pos == -1)
        return letters[0];

        return letters[pos];
    }
};