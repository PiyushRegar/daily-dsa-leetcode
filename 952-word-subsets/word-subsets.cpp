class Solution {
    void setMaxFreq(vector<int>& freq_words2, vector<int>& freq) {
         for(int i=0;i<26;++i)
            freq_words2[i] = max(freq_words2[i],freq[i]);
    }
    bool isUniversal(vector<int>& freq_word,vector<int>& freq_words2){
        for(int i=0;i<26;++i){
            if(freq_word[i]<freq_words2[i])
                return false;
        }
        return true;
    }
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        //STEP-1: Find MAX_freq of every character for each word in words2
        vector<int> freq_words2(26);
        for(string word: words2){
            vector<int> freq(26);
            for(char c: word)
                freq[c-'a']++;
            setMaxFreq(freq_words2,freq);
        }

        //STEP-2: Find universal words in words1
        vector<string> universal_words;
        for(string word: words1){
            vector<int> freq_word(26);
            for(char c: word)
                freq_word[c-'a']++;
            
            if(isUniversal(freq_word,freq_words2))
                universal_words.push_back(word);
        }
        return universal_words;
    }
};