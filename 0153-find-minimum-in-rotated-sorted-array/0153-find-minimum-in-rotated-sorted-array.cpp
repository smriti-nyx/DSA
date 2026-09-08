class Solution {
public:
//check sorted half 
///if sorted , find minm and update minval
//check the left half if sorted, update minval. repeat.

    int findMin(vector<int>& nums) {
        int n = nums.size() ; 
        int high = n-1 ; 
        int low = 0 ; 
        int ans = INT_MAX ;
        int val = 0 ; 
        while(low<=high){
            int mid = (low+high)/2 ; 

            // checking if left half is  sorted 
             if(nums[mid]>=nums[low]){
                val = *min_element(nums.begin() + low , nums.begin() + mid +1 );
                ans = min(ans , val);
                //if sorted , we remove that search space 
                low = mid +1 ; 

             }else{ //checking if right half is sorted 
             val = *min_element(nums.begin() + mid , nums.begin() + high +1) ;
             ans = min(ans , val);
             //if sorted , we remove that search space 
             high = mid -1 ;
             }
        }
        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna