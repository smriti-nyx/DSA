class Solution {
public:
    int numberOfSteps(int num) {
        //n>>1
        long long  cnt = 0 ; 
        while(num> 0){
            if(num%2==0){
                num /=2 ; 
            }else{
                num -=1 ; 
            }
            cnt++;
        }
       return cnt ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna