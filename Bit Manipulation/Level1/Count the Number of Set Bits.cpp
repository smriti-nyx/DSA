class Solution {
public:
    int countSetBits(int n) {
        int cnt = 0 ; 
        while(n>1){
          cnt+= (n&1) ; //will give 1 if 1 , else 0 so nothing this added to count then.
          n = n>>1; //since x>>k = x/2^k.
        }
        if(n==1){
            cnt += 1; 
        }
        return cnt ;
    }
};