// Title: Minimum Window Substring\n// Difficulty: Hard\n// Language: cpp\n// Link: https://leetcode.com/problems/minimum-window-substring/\n\nclass Solution {
public:
    string minWindow(string s, string t) {

        int m = s.size();
        int n = t.size();

        int low = 0;
        int high;

        int formed = 0;

        unordered_map<char,int> need;
        unordered_map<char,int> window;

        for(int i = 0; i < n; i++){
            need[t[i]]++;
        }

        int req = need.size();

        int min_len = INT_MAX;
        int start = 0;

        for(high = 0; high < m; high++){

            window[s[high]]++;

            if(need.count(s[high]) &&
               window[s[high]] == need[s[high]]){
                formed++;
            }

            while(formed == req){

                if(high - low + 1 < min_len){
                    min_len = high - low + 1;
                    start = low;
                }

                window[s[low]]--;

                if(need.count(s[low]) &&
                   window[s[low]] < need[s[low]]){
                    formed--;
                }

                low++;
            }
        }

        if(min_len == INT_MAX){
            return "";
        }

        return s.substr(start, min_len);
    }
};