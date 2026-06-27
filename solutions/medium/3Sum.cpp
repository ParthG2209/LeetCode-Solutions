// Title: 3Sum\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/3sum/\n\nclass Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        int n = nums.size();


        for( int i = 0; i < n-2 ; i ++){
            int Sum = -1*nums[i];
            if (i > 0 and nums[i] == nums[i-1]){
                continue;
            }
            int left = i +1 ;
            int right = n-1;
            while (left < right){
                int S = nums[left] + nums[right];
                if ( S == Sum){
                    res.push_back({nums[i], nums[left], nums[right]});
                    left ++;
                    right --;
                    while ( left < n and nums[left] == nums[left-1]){
                        left ++;
                    }
                     while ( right > 0 and nums[right] == nums[right+1]){
                        right --;
                    }

                }
                else if ( S < Sum){
                    left ++;
                }
                else {
                    right --;
                }
                
                }

            }
            return res;
        }
        
    };

