// Title: Longest Substring Without Repeating Characters\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/\n\nclass Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        int low = 0;
        int high;
        int max_len = INT_MIN;
        unordered_map<char,int>hash;
        for(high = 0; high < n; high ++){
            hash[s[high]]++;
            if(hash[s[high]]==1){
                int len = high - low + 1;
                
                if(len > max_len){
                    max_len = len;
                }
            }
            else{
                while(hash[s[high]] == 2 and low < n-1){
                    hash[s[low]]--;
                    if(hash[s[low]] != 1){
                        hash.erase(s[low]);
                    }
                    low ++;
                }
            }
        }
        if(max_len == INT_MIN){
            return 0;
        }
        return max_len;

    }
};