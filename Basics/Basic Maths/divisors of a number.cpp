#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> factor ;

         for( int i= 1 ; i <=sqrt(n) ; i++){
            if(n%i == 0){
            factor.push_back(i) ;
            if(n/i != i){
              factor.push_back(n/i);
            }
        }
      }
sort(factor.begin() , factor.end()) ;
    return factor ;
    }
    
};



