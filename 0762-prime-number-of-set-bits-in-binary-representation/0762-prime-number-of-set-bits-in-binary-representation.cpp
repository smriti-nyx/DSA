class Solution {
public:
    int countPrimeSetBits(int left, int right) {
       
        int ans = 0 ;
        //vector<int>setbits;
        unordered_set<int> primes = {2,3,5,7,11,13,17,19};
        for(int i = left ; i <=right ; i++){ //i = 6 
        int temp = i ;
         int setbits = 0 ;


            while(temp>0){
           setbits += (temp&1); //imp vv
           temp>>=1 ;
            }

            //if(((i)&1)==1){ //   cnt++;// }
            //i = i>>1 ; 
            
           // cnt =0 ; 
           // setbits.push_back(cnt) ; 
        
        if(primes.count(setbits)){
            ans++ ; 
        }
    }
       return ans ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna