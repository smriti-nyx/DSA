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
             //most optimised version 
             if(nums[low]<= nums[high]){
                 ans = min(ans , nums[low]);
                break ; 
             }
            // if left half is sorted
             if(nums[low]<=nums[mid]){
                ans = min(ans , nums[low]); //store min
                low = mid +1; //move to the right half 
             }else{//if right half is sorted 
                ans = min(nums[mid] , ans); //store min 
                high = mid -1 ;  //look at the left side
             }
          
             }
        
        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna