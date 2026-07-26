// Title: Subarray Sums Divisible by K\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/subarray-sums-divisible-by-k/\n\nclass Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> prefix(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + nums[i - 1];
        }

        unordered_map<int, int> freq;
        freq[0] = 1;          // prefix[0]

        int ans = 0;

        for (int i = 1; i <= n; i++) {

            int rem = ((prefix[i] % k) + k) % k;

            ans += freq[rem];

            freq[rem]++;
        }

        return ans;
    }
};