class Solution {
public:
    bool canConstruct(string s, int k) {
        // If the number of substrings (k) is greater than the length of the string, 
        // it's impossible to construct k palindromes. Return false.
        if(k > s.size()) return false;

        // Initialize a frequency vector to count occurrences of each character (a-z).
        vector<int> freq(26, 0);

        // Count the frequency of each character in the string.
        for(char c : s){
            freq[c - 'a']++;
        }

        // Count the number of characters with an odd frequency.
        int oddcount =  0;
        for(int count : freq){
            if(count % 2 != 0) oddcount++;
        }
        
        // A palindrome can only have at most one character with an odd frequency.
        // Check if the number of odd frequency characters is less than or equal to k.
        return oddcount <= k;
    }
};
