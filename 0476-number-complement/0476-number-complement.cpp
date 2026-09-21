class Solution {
public:
    int findComplement(int num) {
     int temp = num ; 
     int bitlength = 0 ; //to check no. of bits being used 

     while(temp>0){
        bitlength++ ; 
        temp>>=1 ; 
     }

        for(int i = 0 ; i <bitlength ; i++){
          num ^= (1<<i) ; 
           }
        return num ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna