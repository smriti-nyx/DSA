class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = 1; 
        int flips =0 ; 
        //check the last digit , xor of last digit is 1 if both digits are diff . 
        
        while(start>0||goal>0){
                if(((start&1)!=(goal&1)) ==1){//picking up the lsb and doing the op to see if a flip is needed or not .
                    flips++;
                }
            start>>=1 ;
            goal>>=1 ; 
             //move to the next digit from the right towards left
        }
        return flips ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna