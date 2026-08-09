class Solution {
public:
    int countDigit(int n) {
        int count = 0 ;
       while(n >0){
        int lastdigit = n%10 ; 
        n = n/10 ; 
        count++ ; 
       }
       return count ;

    }
};