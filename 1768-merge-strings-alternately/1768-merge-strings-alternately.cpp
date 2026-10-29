
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newWord = "";
        int i = 0;
        int k = 0;

        while (i < word1.size() || i < word2.size()) {
            if (i < word1.size()) {
                newWord += word1[i];
            }
            if (i < word2.size()) {
                newWord += word2[i];
            }
            i++;
            k += 2;
        }

        return newWord;
    }
};
