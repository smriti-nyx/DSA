class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end());
        for(int i = n-1; i>0 ; i--){
            if(nums[i]!=nums[i-1]){
                return nums[i-1]; 
            }
        }
      return -1 ;
    }
};