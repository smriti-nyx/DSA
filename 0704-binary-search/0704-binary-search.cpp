class Solution {
public:
//recursive version
int binarysearch(int high , int low , int target , vector<int>& nums , int n){
    //base case
    if(low>high){
        return -1 ;
    }
    int mid = (low + high)/2 ; 

    //recursive case
    if(target == nums[mid]){
        return mid ; 
    }
    else if(target > nums[mid]){
       return binarysearch(n-1 , mid+1,target , nums ,n);
    }
    else{
        return binarysearch(mid-1 ,low , target , nums, n );
    }


}
    int search(vector<int>& nums, int target) {
        int n= nums.size();
       // int mid = (low+high)/2 ;
        
        
       return  binarysearch(n-1 , 0 ,target , nums ,n);
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna