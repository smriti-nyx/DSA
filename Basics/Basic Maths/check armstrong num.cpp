class Solution {
public:
    bool isArmstrong(int n) {
        int sum = 0 ; 
        int dup = n ; 
       while( n >0){
        int ld = n%10 ;
        sum += ld * ld*ld ; 
        n = n/10 ; 
       }
       return ( dup == sum) ? true : false ;
    }
    
};