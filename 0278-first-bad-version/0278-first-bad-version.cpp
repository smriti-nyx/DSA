// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1 ; 
        int high = n ; 
        int mid = low +(high-low)/2;
        if(n==1){
        return n ; 
        } 

        while(low<high){
            //int mid = low+(high-low)/2;
             if (!isBadVersion(mid)){
                low = mid+1 ;
             }else{
                high = mid ;
             }
             mid = low+(high-low)/2;
        }
        return mid ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna