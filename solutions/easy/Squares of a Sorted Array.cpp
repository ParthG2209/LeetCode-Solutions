// Title: Squares of a Sorted Array\n// Difficulty: Easy\n// Language: cpp\n// Link: https://leetcode.com/problems/squares-of-a-sorted-array/\n\nclass Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> a;
        vector<int> b;
        vector<int> res(n);

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0)
                a.push_back(nums[i]);
            else
                b.push_back(nums[i]);
        }

        if (a.size() == 0) {
            for (int i = 0; i < n; i++)
                nums[i] = nums[i] * nums[i];
            return nums;
        }

        if (b.size() == 0) {
            for (int i = 0; i < n; i++)
                nums[i] = nums[i] * nums[i];
            reverse(nums.begin(), nums.end());
            return nums;
        }

        reverse(a.begin(), a.end());

        int d = a.size();
        int e = b.size();

        int i = 0;
        int j = 0;
        int id = 0;

        while (i < d && j < e) {
            if (a[i] * a[i] <= b[j] * b[j]) {
                res[id] = a[i] * a[i];
                i++;
            } else {
                res[id] = b[j] * b[j];
                j++;
            }
            id++;
        }

        while (i < d) {
            res[id] = a[i] * a[i];
            i++;
            id++;
        }

        while (j < e) {
            res[id] = b[j] * b[j];
            j++;
            id++;
        }

        return res;
    }
};