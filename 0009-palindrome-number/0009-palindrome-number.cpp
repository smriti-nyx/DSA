class Solution {
public:
    bool isPalindrome(int x) {
        int dup =x ;
        long long revnum = 0 ;
       // return(x==0) ? true : false ;
       if (x<0 || (x%10 ==0 && x !=0)){
         return false ; 
       } 
        while(x>0){
           int  i = x%10 ; 
            revnum = ( 10* revnum) + i ;
            x = x/10 ; 
        }
        return (revnum == dup )? true : false ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna