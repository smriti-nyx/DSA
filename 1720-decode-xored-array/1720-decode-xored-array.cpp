class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int>arr(encoded.size()+1);
        arr[0] = first ; 

        
        for(int i = 0 ; i <encoded.size() ; i++){
            arr[i+1] = arr[i]^encoded[i];
            
        }
        return arr ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna