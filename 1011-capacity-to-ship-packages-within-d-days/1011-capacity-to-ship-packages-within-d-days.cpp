class Solution {
public:
int daystaken(vector<int>& weights ,int capacity ){
    int days = 1;
    int curr_weight = 0; 
    for(int w :weights){
        if(w+ curr_weight>capacity){
            days++;
            curr_weight = w;
        }else{
            curr_weight+=w ; 
        }
    }
      return days ; 
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin() , weights.end());
        int high = accumulate(weights.begin() , weights.end() , 0); //accumulate(start iterator, end iterator, and the initial value)
        int ans = high ; 
        while(low<=high){
            int mid = (low+high)/2;
            if(daystaken(weights , mid)<=days){
                ans = mid;
                high = mid -1 ; 
            }else{
                low = mid+1 ; 
            }
        }
             return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna