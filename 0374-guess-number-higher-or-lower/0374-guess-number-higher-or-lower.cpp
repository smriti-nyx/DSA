/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int high = n;
        int low =1 ; 
        while(low<=high){
            int mid = low+(high-low)/2;
            if(guess(mid) == 0){
                return mid ;
            }
            if(guess(mid)>0){
                low = mid+1;
            }else{
                high = mid -1 ; 
            }
        }
        return low ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna