class Solution {
public:
int fib(int n) {
        //base case 
    if(n<=1){
        return n ; 
    }
    //recursive case 
    int l = fib(n -1) ;
    int r = fib(n-2) ;
    return l +r ;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna