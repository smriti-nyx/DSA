class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int high = n-2 ; 
        int low = 1 ; 
        if(n==1) return 0 ; 
        if(nums[0] >nums[1]) return 0 ; 
        if(nums[n-1] > nums[n-2]) return n-1 ; 
        while(low<= high){
            int mid = (low+high)/2 ; 
            if(nums[mid]>nums[mid-1]&& nums[mid+1]<nums[mid]){
                return mid ; 
            }
              else if(nums[mid+1] >nums[mid]){
                low = mid+1 ; 
              }else{
                high = mid-1 ; 
              }
        }
        return 0 ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna