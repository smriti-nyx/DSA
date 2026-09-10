class Solution {
public:
int findmax(vector<int>& piles){
    int maxi = INT_MIN ; 
    for(int i = 0 ; i <piles.size() ; i++){
        maxi = max(maxi , piles[i]);
    }
    return maxi ; 
}
long long K(vector<int>& piles , int k){
    long long time = 0 ;
        for(int i = 0 ; i <piles.size() ; i++){
          time += ceil((double)piles[i]/(double)k);
        }
        return time; 
}

    int minEatingSpeed(vector<int>& piles, int h) {
        //1 , max e
        int high = findmax(piles);
        int low = 1 ; 
        int ans = INT_MAX ; 
        while(low<=high){
            int mid = (low+high)/2 ;
             //k=6
             long long hours = K(piles , mid);
             if(hours <= h){ //less time taken means , it was a bigger k
                ans = mid ;
                high = mid-1 ; 
             }else{
                low = mid+1 ; 
             }
        }
        return ans ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna