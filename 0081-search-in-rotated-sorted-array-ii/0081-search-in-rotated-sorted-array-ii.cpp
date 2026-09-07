class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n-1 ;
         int low = 0 ; 

        while(low<=high){
            int mid = (low+high)/2 ; 

            if(nums[mid] == target) return true ; 
              
              //since there are repeated elements , we shrink our seach space first like this .
              if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                high-- , low++ ; 
                continue ; 
              }
            //checking if left half is sorted (ascending)
            if(nums[low]<= nums[mid]){
                if(target>=nums[low]&&target<=nums[mid]){
                    high = mid -1 ; 
                }else{
                    low = mid+1 ; 
                }
            }
            //for the right half 
            else{
                if(target<=nums[high]&& target>=nums[mid]){
                    low = mid+1 ; 
                }else{
                    high = mid -1 ; 
                }
            }

        }
        return false ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna