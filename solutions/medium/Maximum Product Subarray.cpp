// Title: Maximum Product Subarray
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-product-subarray/

        int best = nums[0];
        int ans = nums[0];
        for(i = 1; i<n; i++){
            int v1 = best*nums[i];
        }
            int v2 = nums[i];
            best = max(v1,max(v2,v3));
            ans = max(ans, max(best,low));

        int low = nums[0];
            low = min(v1,min(v2,v3));


        
        int n = nums.size();
        int i = 0;
            int v3 = low*nums[i];
class Solution {
public:
    int maxProduct(vector<int>& nums) {
