// Title: Longest Repeating Character Replacement\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/longest-repeating-character-replacement/\n\nclass Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int max_freq = 0;
        int max_len = 0;

        unordered_map<char, int> hash;

        for (int high = 0; high < s.size(); high++) {
            hash[s[high]]++;

            max_freq = max(max_freq, hash[s[high]]);

            while ((high - low + 1) - max_freq > k) {
                hash[s[low]]--;
                low++;
            }

            max_len = max(max_len, high - low + 1);
        }

        return max_len;
    }
};