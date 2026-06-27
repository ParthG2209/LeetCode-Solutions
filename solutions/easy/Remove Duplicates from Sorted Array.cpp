// Title: Remove Duplicates from Sorted Array\n// Difficulty: Easy\n// Language: cpp\n// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/\n\nclass Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int i = 0;
        int j = 1;
        int n = nums.size();
        while (j < n){
            if( nums[j] == nums[j-1]){
                j ++;
                continue;
            
            }
            else {
                nums[i + 1] = nums[j];
                i++;
                j++;
                k++;
            }
        }
        return k;

        
    }
};