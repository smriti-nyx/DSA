#include <bits/stdc++.h>
using namespace std;
using ll = long long;
class Solution {
public:
    int reverse(int n) {
        if( n == 0) return 0 ; 
         int revnum = 0 ; 
         ll i = llabs((ll)n);
         int  x = (n<0) ? -1 :1 ;
        while( i >0){
           
              int lastdigit = i % 10 ; 
              if (revnum > INT_MAX / 10 || revnum < INT_MIN / 10) return 0;
              revnum = (revnum * 10 ) + lastdigit ; 
             i = i/10 ; 


        }

        return  revnum  * x ; 
      
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna