// Title: Two Sum II - Input Array Is Sorted\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/\n\nclass Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i ;
        int j ;
        int n = numbers.size();
        i = 0 ; 
        j = n - 1 ;
        int sum ;
        sum = numbers[i] + numbers[j];
        while (i < j){
            sum = numbers[i] + numbers[j];
            if ( sum == target){
                return{ i+1,j+1};
            }
            else if ( sum > target){
                j--;
            }
            else {
                i ++;
            }
            

        }
        return {};

    }
};