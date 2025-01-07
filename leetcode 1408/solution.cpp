// LeetCode Problem: String Matching in an Array

//  Problem Description
//  Given an array of strings `words`, return all strings in the array that are substrings of another word in the array. You can return the answer in **any order**.

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        int n = words.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j)
                    continue;
                if (words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break;
                }
            }
        }

        return result;
    }
};
