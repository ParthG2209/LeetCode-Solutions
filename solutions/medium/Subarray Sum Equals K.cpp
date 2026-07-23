// Title: Subarray Sum Equals K
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/subarray-sum-equals-k/

        
        for( int i=0; i < n ; i ++){
            int m = 0;
            while (m <= i){
                int l = prefix[i+1] - prefix[m] ;
                m ++;
                if(l ==k ){
                    j ++;
        for(int i= 1; i <= n; i++){
            prefix[i] = prefix[i-1] + nums[i-1];
        }
        
        prefix[0] = 0;
        vector<int>prefix(n+1,0);

        int j = 0;
        int n = nums.size();
public:
    int subarraySum(vector<int>& nums, int k) {
class Solution {
