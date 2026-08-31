class Solution {
public:
//iy
    bool check(vector<int>& nums) {
        int n = nums.size() ; 
        int cnt = 0 ;
    
       for(int i =1 ; i <n;i++){
        if(nums[i-1] >nums[i]){
            cnt++; 
        }
       }
       if(nums[n-1]>nums[0]){
            cnt++ ; 
        }
      return cnt<=1;  //less than sign added because if the array has all the elements same , the cnt will be 0.
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://b