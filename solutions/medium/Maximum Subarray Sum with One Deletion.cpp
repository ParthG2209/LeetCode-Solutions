// Title: Maximum Subarray Sum with One Deletion
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/

           int v1 = best_nodel + arr[i];
           int v2 = arr[i];

           
           int v3 = best_del + arr[i];
           int v4 = best_nodel  ;
           best_del = max(v3,v4);
        for (i = 1 ; i < n ; i++){
        int low = arr[0];
           ans_del = max(best_del, ans_del);
           if(ans_del>ans_nodel){
            final_ans = ans_del;
           }
        int best_nodel = arr[0];
           else{
           best_nodel = max(v1,v2);
           ans_nodel = max(ans_nodel,best_nodel);
            final_ans = ans_nodel;
           }

        int best_del = arr[0];
