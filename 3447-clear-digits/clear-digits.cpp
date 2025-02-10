class Solution {
public:
    string clearDigits(string s) {
        int j = 0; // Pointer for modifying the string in-place

        for (char c : s) {
            if (isdigit(c)) {
                if (j > 0) j--; // Remove the last valid character
            } else {
                s[j++] = c; // Keep the character
            }
        }

        return s.substr(0, j); // Return the modified part of the string
    }
};
