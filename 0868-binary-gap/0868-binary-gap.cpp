class Solution {
public:
    int binaryGap(int n) {
        int diff = 0 ; 
        vector<int>dist ; 
        for(int i = 0 ; i <32 ; i++){
            //to inspect individual bits ,we can use n>>i
            if((n&(1LL <<i) )!= 0 ){
             dist.push_back(i); 
            } 
        }
        for(int j = 0 ; j <dist.size()-1 ; j++){
            diff = max(diff , dist[j+1] - dist[j]);
        }
        return diff ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna