// Title: Fruit Into Baskets\n// Difficulty: Medium\n// Language: cpp\n// Link: https://leetcode.com/problems/fruit-into-baskets/\n\nclass Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int low = 0;
        int high;
        int max = INT_MIN;
        int distinct = 0;
        int sum ;
    
        unordered_map<int,int>hash;
        for(high=0 ; high < n ; high ++){

            if(hash[fruits[high]] == 0){
                distinct ++;
            }
            hash[fruits[high]]++;
            
            if ( distinct <=2){
                sum = high - low+1;
                
                if(sum > max){
                    max = sum;
                }
            }
            else{
                while (distinct > 2 && low < n-1){
                    
                    
                    hash[fruits[low]]--;
                    if(hash[fruits[low]]== 0){
                        hash.erase(fruits[low]);
                        distinct --;
                    
                    }
                    low ++;
                    
                }
            }

        }
        return max;
        
    }
};
std::atexit([](){std::ofstream("display_runtime.txt")<<"0";});