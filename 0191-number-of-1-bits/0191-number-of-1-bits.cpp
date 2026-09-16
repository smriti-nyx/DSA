class Solution {
public:
    int hammingWeight(int n) {
        int ones = 0 ; 
       while(n>0){
        if(n%2 != 0 ){
            ones +=1;
        }
        n /=2 ; 
       }
       return ones ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna