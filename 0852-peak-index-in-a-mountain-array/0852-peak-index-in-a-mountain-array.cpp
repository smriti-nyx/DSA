class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int n = nums.size() ; 
        if(n==1) return 0 ;
        if(nums[0]>nums[1]) return nums[0];
        if(nums[n-1]>nums[n-2]) return nums[n-1];
        int high = n-2 ; 
        int low = 1 ; 
        while(low<=high){
            int mid = (low+high)/2 ; 
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
                return mid ; 
            }//the goal is to find the larger element wrt mid and go on its side w binary search
            if(nums[mid]<nums[mid+1]){
                 low = mid+1 ; 
            }else{
                high = mid -1 ; 
            }
        }
                return 0 ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna