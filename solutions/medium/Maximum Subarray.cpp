// Title: Maximum Subarray
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int best = nums[0];

        
        int ans = nums[0];
        for(i = 1;i<n;i++){
        return ans;
            int v1 = best + nums[i];
        }
            int v2 = nums[i];
            best = max(v1,v2);
            ans = max(best,ans);
    }

};
