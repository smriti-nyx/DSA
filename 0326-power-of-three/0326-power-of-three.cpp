class Solution {
public:
  bool power(int n ){
    
    if(n ==1){
    return true ;
}   
    //recursive case 
    while(n%3==0){
        n= n/3;
    }

    return n==1 ;  //returns true if n comes out ot be 1 in th ene d
  }
    bool isPowerOfThree(int n) {
        if(n<=0) return false ; 
        if(n==1) return true ; 
        if(n%3!= 0) return false ; 
        
        return power(n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna