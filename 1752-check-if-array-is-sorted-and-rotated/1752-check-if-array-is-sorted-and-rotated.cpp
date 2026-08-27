class Solution {
public:

    bool check(vector<int>& nums) {
        vector<int>B = nums ; 
        sort(B.begin() , B.end());
for(int x = 0 ; x < nums.size() ; x++){
    bool matches = true ; 
    for(int i = 0 ; i <nums.size() ; i++){
//if(nums[i] == B[i]) return true ;
    if(B[i] != nums[(i+x) % nums.size()]){
      matches = false ;
       break ; 
    } 
    
 }
    if(matches) return true ; 
}
    return false ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna