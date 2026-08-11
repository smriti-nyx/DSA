#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
        //your code goes here
        int count = 0;
        for(int i = 1; i<=sqrt(n); i++){
         if(n%i== 0 ) count++ ;
         if((n/i) != i) count ++ ;
         
    
         }
         return(count==2)? true : false;
        }
};