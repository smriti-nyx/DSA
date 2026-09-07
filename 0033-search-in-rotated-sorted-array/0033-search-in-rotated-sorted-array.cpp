class Solution {
public:
//use binary search 
//find mid 
//check if right is sorted , check if target lies in the right range .
//do the same for left .
//for ex [ 4,5,1,1,2,3,4] is not sorted  whereas [4,5,6,7,0,1,2] is sorted .
    int search(vector<int>& nums, int target) {
        int n = nums.size();
         int low = 0 ,  high = n-1 ; 

         while(low<= high){
            int mid = (low +high)/2 ; 
            if(nums[mid] == target) return mid ; 

            if(nums[low]<= nums[mid]){
                 if(target>= nums[low] && target<= nums[mid]){
                    high = mid -1 ;
                 }else{
                    low = mid+1 ; 
                 }
                 }else{
                    if(nums[mid]<=target&& nums[high]>= target){
                        low = mid+1 ; 
                    }else{
                  high = mid-1 ;
                    }
                    
                 }
            }
         
        return -1 ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna