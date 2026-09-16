class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y ; 
        int count = 0 ; // if last bit is 1 ,n&1 returns 1 , else 0 .
        while(n>0){
          //  if(n&1 ==1){ //n is the xor and we check if its lsb is 1 or not . 1 means diff chars 
                count += (n&1) ; //adding to count
               n >>=1 ;  //dropping the last digit
            }
        
        return count ;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna