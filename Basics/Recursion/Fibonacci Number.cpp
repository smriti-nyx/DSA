class Solution {
public:
    int fib(int n) {
        if(n<=1) return n ; 
       int fib_last = fib(n-1);
        int fib_slast = fib(n-2) ; 
        return fib_last + fib_slast;
       
    }
};