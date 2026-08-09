#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void print1(int n ){
    for(int i = 0 ; i < n ; i ++){
        for(int j  = 0 ; j< n+1-i ; j++){
            cout<<"*";
        }
        cout<<"\n" ; 
    }
}
 
int main(){
   print1(5);
 
 
  }
