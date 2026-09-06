class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
    //floor = nums[i]<=x , ceil = nums[i] >= x ; 
    int n = nums.size() ; 
    int high = n-1; 
    int low = 0 ; 
    int floor = -1 ; 
    int ceil = -1;

    while(low<=high){

        int mid = (low+high)/2 ; 

        if(nums[mid]== x){
            return { x, x} ;

        }else if(nums[mid] < x){
             floor = nums[mid] ; 
            low = mid+1 ; 
           
        }else{//nums[mid]>x

             ceil = nums[mid] ; 
             high = mid -1 ;
        }
    }
       return { floor, ceil};
    
    }
};