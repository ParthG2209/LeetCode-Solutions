// Title: Minimum Size Subarray Sum\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/minimum-size-subarray-sum/\n\nclass Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int min_len = INT_MAX;
        int low = 0;
        int curr_sum = 0;
        for (int high = 0; high < n ; high ++){
            curr_sum = curr_sum + nums[high];
            while(curr_sum >= target){
                min_len = min(min_len, high - low + 1);
                curr_sum = curr_sum - nums[low];
                low ++;
            }
        }
        if( min_len == INT_MAX){
            return 0;
        }
        return min_len;
    }
};