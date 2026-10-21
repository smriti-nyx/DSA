class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //brute force
        if(nums.empty()){
            return 0 ; 
        }
        sort(nums.begin() , nums.end()) ; 
        int smaller = INT_MIN ; 
        int cnt = 1 ; 
        int longest = 1 ; 
        for(int i = 0 ; i <nums.size()-1 ; i++){
            if(nums[i+1] == nums[i]+1){
                cnt++ ; 
                smaller = nums[i+1];
            }else if (nums[i+1]==nums[i]){

            }else{
                cnt =1 ;
            }
                longest = max(longest , cnt);
        }
        return longest ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna