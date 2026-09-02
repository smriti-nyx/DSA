class Solution {
public:
    int singleNumber(vector<int>& nums) {
       // we will perform xor bitwise op w 0 , since xor of a no. with 0 gives itself and the xor of number w iteself gives 0. hence if the final answer isnt zero , there exists a number which appears only once. return that number.
       int ans = 0 ; 
       for(auto x: nums ){
        ans = ans^x ; 
       }
    return ans ; 
       
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna