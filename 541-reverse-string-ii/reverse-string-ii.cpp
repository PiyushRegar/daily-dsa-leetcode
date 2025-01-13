class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        for (int i = 0; i < n; i += 2 * k) {
           
            int st = i;
            int end = min(i + k - 1, n - 1); 
            while (st < end) {
                swap(s[st], s[end]);
                st++;
                end--;
            }
        }
        return s;
    }
}; 