class Solution {
public:
int findsum(vector<int>& nums ,int divisor ){
    int sum = 0;
    for(int i = 0 ; i <nums.size() ; i++){
     sum += (nums[i] + divisor -1)/divisor ;
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size() ; 
        int low = 1 ; 
        int high = *max_element(nums.begin(),nums.end()) ; 
        int ans = -1 ; 
        while(low<=high){
            int mid = (low+high)/2 ; 
             int mythreshold = findsum(nums , mid);
             if(mythreshold>threshold){
                 low = mid+1;
              //  high = mid-1 ; 
             }
             else{
                ans = mid ;
                high = mid-1 ; 
             }
        }
        return ans ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna