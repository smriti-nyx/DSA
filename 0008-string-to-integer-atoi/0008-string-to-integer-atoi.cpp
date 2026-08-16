class Solution {
public:
    int myAtoi(string s) {
        vector<char> v ; 
        int i = 0 ; 
        long long  num = 0  ;
         int sign = 1 ; 
        int n = s.length() ; 
        //skipping spaces
        while(i <n && s[i] == ' '){
            i++ ; 
        } // reading sign 
        if( i <n && (s[i] == '+' || s[i] == '-' )){
               sign = (s[i] == '-') ? -1:1 ;
               i++ ;
            }
       
        
        while( i<n && (s[i]>= 48 && s[i]<=57)){
                num = num *10  + (s[i] - 48); 
                if( num * sign >= INT_MAX) return INT_MAX ; 
                if(num*sign <= INT_MIN) return INT_MIN; 
                i++ ; 
            
        }
        
               return num * sign ;
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna