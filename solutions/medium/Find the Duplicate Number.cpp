// Title: Find the Duplicate Number\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/find-the-duplicate-number/\n\nclass Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int slow = 0;
        int fast = 0;
        slow = nums[slow];
        fast = nums[nums[fast]];
        if(slow == fast) {
            return nums[slow];
        }
       
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast){
                
                int temp = 0;
                while(temp != slow){
                    temp = nums[temp];
                    slow = nums[slow];
                }
                return slow;
            }

        }
        return 120;
        
    }
};