class Solution {
public:
    int singleNumber(vector<int>& nums) {
       // we will perform xor bitwise op w 0 , since xor of a no. with 0 gives  the num itself and the xor of number w iteself gives 0. hence if the final answer isnt zero , there exists a number which appears only once. return that number.
       int ans = 0 ; 
       for(auto x: nums ){
        ans = ans^x ; 
       }
    return ans ; 
       
    }
};

//Additionally, XOR is both commutative and associative.This means the order in which numbers are XORed does not matter. so if the ans is 0 , there are all duplicates , else the num is hte output . 

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna