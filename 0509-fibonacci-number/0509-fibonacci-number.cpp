class Solution {
public:
    int fib(int n) {
        if(n ==1 || n== 0){
            return n ;
        }else{
            return fib(n-1) + fib(n-2);
        }
       //int  sum = 0 ; 
      // findfib(n , sum);
       //return sum ;
       
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna