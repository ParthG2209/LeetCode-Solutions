// Title: Maximum Sum Circular Subarray\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/maximum-sum-circular-subarray/\n\nclass Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int best = nums[0];
        int total_sum = nums[0];
        int mini = nums[0];

        int ans = nums[0];
        int ans_circular = nums[0];
        int low = nums[0];
        int final_ans = nums[0];
        for ( i= 1 ; i < n ; i ++){
            int v1 = best + nums[i];
            int v2 = nums[i];
            int v3 = low + nums[i];

            best = max( v1,v2);
            low = min(v2,v3);
            mini = min( low, mini);
            total_sum += v2;
            ans = max(ans,best);
            ans_circular = max(ans , max(best, total_sum - mini));
            if (ans_circular > ans){
                final_ans = ans_circular;
            }
            else{
                final_ans = ans;
            }
            if ( mini == total_sum){
                final_ans = ans;
            }
        }
        return final_ans;
    }
};