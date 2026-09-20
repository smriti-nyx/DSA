class Solution {
public:
    vector<int> grayCode(int n) {
        //00 , 01 , 11 , 10 
                int size = (1<<n)  ; 
        vector<int>ans(size) ; 
        for(int i = 0 ; i <size ; i++){
            ans[i] = (i ^(i>>1)) ;
        }
        return ans ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna