class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int curr = 0;
        int best =0 ;
        for(int i = 0 ; i <n ; i++ ){
            if(nums[i] ==1){
                curr++;
                 best = max(best,curr);

            }
            else if(nums[i]==0){
               curr =0; ;
            }
        }
        return best ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna