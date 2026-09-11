class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int l = 0 ; 
        int h = n;
        while(l<h){
            int m = (l +h)/2 ; 
            
            if(nums[m] == m ){
                l = m+1 ; 
            }else{
                h = m ;
            }
        }
        return l; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna