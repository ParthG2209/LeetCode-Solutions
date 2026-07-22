// Title: Find Pivot Index\n// Difficulty: Easy\n// Language: cpp\n// Link: https://leetcode.com/problems/find-pivot-index/\n\nclass Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int j = INT_MIN;
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        for (int i = 1 ; i < n; i ++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }
        for( int i = n-2; i >=0 ; i --){
            suffix[i] = suffix[i+1] + nums[i+1];
        }
        for ( int i = 0; i < n ; i ++){
            if (prefix[i] == suffix[i]){
                j = i;
                break;
            }
            
        }
        if ( j != INT_MIN){
            return j;
        }
        else{
            return -1;
        }
    }
};