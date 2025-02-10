class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26, 0);  // Frequency array for lowercase letters

        for (char c : s) {
            freq[c - 'a']++;  // Count frequency
        }

        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;  // First unique character index
            }
        }

        return -1;  // No unique character found
    }
};
