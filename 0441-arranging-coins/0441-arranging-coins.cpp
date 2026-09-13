class Solution {
public:
    int arrangeCoins(int n) {
        int low = 1 ; 
        int high = n ; 
        int ans = 0;
        while(high>=low){
        long long mid =low+(high-low)/2 ; 
        long long neededcoins = mid*(mid+1)/2;
        //mid = 4 for 4 complete rows , 10 blocks needed
         if(neededcoins==n){
            return mid ; 
         }
         if(neededcoins < n){
            //ans  = n- comprow(mid);
            low = mid+1 ; 
         }else{
            high = mid -1 ; 
         }

        }
        return high ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna