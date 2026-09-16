class Solution {
public:
    char findTheDifference(string s, string t) {
        int result = 0;
         for(char c :s){
            result^=c;
         }
         for(char c:t){
            result^=c ;
         }
         return result ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna