class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int>ones(n+1);
        //int ones =0 ; 
        if(n == 0){
            return ones ; 
        }
        for(int i = 0; i <=n ; i++){
            if(i%2 != 0){
                ones[i] += ones[i/2] +1 ; 
            }else{
                ones[i] = ones[i/2]; 
            }
        }
        return ones ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna