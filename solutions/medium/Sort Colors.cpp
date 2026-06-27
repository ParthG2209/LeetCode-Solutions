// Title: Sort Colors\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/sort-colors/\n\nclass Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int end = n - 1;
        int i = 0;

        while (i <= end) {
            if (nums[i] == 2) {
                swap(nums[i], nums[end]);
                end--;
            } else {
                i++;
            }
        }

        int start = 0;
        i = 0;

        while (i <= end) {
            if (nums[i] == 0) {
                swap(nums[i], nums[start]);
                start++;
            }
            i++;
        }
    }
};