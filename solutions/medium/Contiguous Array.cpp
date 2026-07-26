// Title: Contiguous Array\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/contiguous-array/\n\nclass Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n = nums.size();

        // Convert 0 -> -1
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                nums[i] = -1;
        }

        unordered_map<int, int> first;

        // Prefix sum 0 occurs before the array starts
        first[0] = 0;

        int prefix = 0;
        int ans = 0;

        for (int i = 1; i <= n; i++) {

            prefix += nums[i - 1];

            if (first.find(prefix) != first.end()) {
                ans = max(ans, i - first[prefix]);
            } else {
                first[prefix] = i;
            }
        }

        return ans;
    }
};