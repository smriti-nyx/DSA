class Solution {
public:
//OPTIMAL SOLN , GETTING RID OF THE EXTRA SPACE
    uint32_t reverseBits(uint32_t n) {
       // int n = nums.size(); 
       // int bit =0;
        uint32_t res =0; 
        for(int i = 0 ; i <32; i++){
           uint32_t bit = (n>>i)&1 ; //storing the rightmost bit 
            res = res | (bit<<(31-i)); // took or of res and the shifted bit to put it on the 31st position
        }
        return res ; 
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna