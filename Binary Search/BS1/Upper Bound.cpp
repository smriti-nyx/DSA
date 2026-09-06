class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        //iterative version 
        int n = nums.size(); 
        int high = n-1 ; 
        int low = 0 ; 
        int ans = n ; 
        while(low<= high){
            int mid = (low+high)/2 ;
            if(nums[mid]>x){
                ans = mid ; 
                high = mid -1 ; 
            }else{
                low = mid+1 ; 
            }
        }
        return ans; 
        
        
    }
};