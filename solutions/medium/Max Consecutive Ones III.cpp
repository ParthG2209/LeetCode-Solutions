// Title: Max Consecutive Ones III\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/max-consecutive-ones-iii/\n\nclass Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high;
        int max_len = INT_MIN;

        int num_one = 0;
        int num_zero = 0;

        for(high = 0; high < n ; high++){

            if(nums[high]==1){
                num_one++;
            }
            else{
                while((high-low+1) - num_one > k){
                    if(nums[low]==0){
                        num_zero--;
                    }
                    else{
                        num_one--;
                    }
                    low ++;
                }
            }
            max_len = max(max_len, high-low+1);
        }
        return max_len;
        
    }
};