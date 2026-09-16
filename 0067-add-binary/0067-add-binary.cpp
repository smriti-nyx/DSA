class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() -1 ; 
        int j = b.length() -1 ;
        int carry = 0 ; 
        string result = "";
       // int sum = 0 ; 
        while(i>=0 || j>=0||carry){ //using or here since we want to traverse them both completely.
        int sum = carry ;
        
            if(i>=0){
                sum += a[i] - '0' ; //converting char to int .
                i--;
            }

            if(j>=0){
                sum += b[j] -'0' ; 
                j-- ; 
            }

            carry = sum/2;
            result += to_string(sum%2) ;
        }
        reverse(result.begin() , result.end());
        return result ; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna