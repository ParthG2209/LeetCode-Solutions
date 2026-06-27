// Title: Happy Number\n// Difficulty: Easy\n// Language: cpp\n// Link: https://leetcode.com/problems/happy-number/\n\nclass Solution {
public:
   int nextNum(int n ){
    int sum = 0;
    while (n>0){
        int digits = n%10;
        sum = sum + digits*digits;
        n = n/10;
        
    }
    return sum;
   }
   
    bool isHappy(int n) {
        if( n == 1){
            return true;
        }
        int slow = n;
        int fast = n;
        slow = nextNum(slow);
        fast = nextNum(nextNum(fast));
        
        while( slow != fast ){
            slow = nextNum(slow);
            fast = nextNum(nextNum(fast));
            if(slow ==1){
                return true;

            }
            
            

        }
        return false;
    }
};