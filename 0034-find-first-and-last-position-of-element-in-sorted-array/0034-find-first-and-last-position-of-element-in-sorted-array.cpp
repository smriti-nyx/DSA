class Solution {
public:

int lowerbound(int high , int low , int target , int lbb , vector<int>& nums ){
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]>=target){
            lbb = mid ; 
            high = mid -1 ; 
        }else{
            low = mid+1 ; 
        }
    }
    return lbb ; 

}
int upperbound(int high , int low , int target , int ubb , vector<int>& nums ){
    while(low<= high){
        int mid = (low+high)/2 ; 
        if(nums[mid]>target){
            ubb = mid ; 
            high = mid -1 ; 
        }else{
            low = mid+1 ; 
        }
    }
    return ubb ; 
}
    vector<int> searchRange(vector<int>& nums, int target) {
        //optimal approach
        int n = nums.size();
        int high = n-1 ; 
        int low = 0 ; 
        int lbb = n ; 
        int ubb = n ; 
        int lb =  lowerbound( high , low , target ,  lbb , nums );
        if(lb == n || nums[lb] != target) return { -1 , -1};
        return { lb , upperbound(high , low , target , ubb , nums)-1} ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna