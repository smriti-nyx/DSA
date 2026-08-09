class Solution {
public:
    int countDigit(int n) {

        int count = 0 ;
       while(n >0){
        n = n/10 ; 
        count++ ; 

       }
       return count ;

    }
};




//OPTIMISED VERSION 

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countDigit(int n) {
        int count =  (int) (log10(n)  + 1 ); 
         return count ; 
    }
  
};