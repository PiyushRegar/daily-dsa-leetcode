class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0, tIndex = 0;

        while (sIndex < s.length() && tIndex < t.length()) {
            if (t[tIndex] == s[sIndex]) {
                sIndex++;  // Move forward in s if a match is found
            }
            tIndex++;  // Always move forward in t
        }

        return sIndex == s.length();  // If we matched all of s, return true
    }
};
