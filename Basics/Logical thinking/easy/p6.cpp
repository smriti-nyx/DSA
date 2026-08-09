#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void print1(int n ){
    for(int i = 0 ; i < n ; i ++){
        for(int j  = 0 ; j< n-i ; j++){
            cout<<"*";
        }
        cout<<"\n" ; 
    }
}
void print2(int n ){
    for(int i = 0 ; i < n ; i ++){
        for(int j  = 0 ; j< 2* i +1 ; j++){
            cout<<"*";
        }
        cout<<"\n" ; 
    }
}
void print4(int n ){
    for(int i = 0 ; i < n ; i ++){
      // for space 
        for(int j = 0 ; j <n-i ; j++){
            cout<<" ";
        }
        //for star
        for(int j = 0 ; j < 2* i +1 ; j++){
            cout<<"*";
        }
        //for space
        for(int j = 0 ; j < n-i ; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
    
} 

void print5(int n ){
    for(int i = 0 ; i < n ; i ++){
      // for space 
        for(int j = 0 ; j <i ; j++){
            cout<<" ";
        }
        //for star
        for(int j = 0 ; j < 2*n -(2 *i +1) ; j++){
            cout<<"*";
        }
        //for space
        for(int j = 0 ; j < i; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
    
}
 
int main(){
   print1(5);
    print2(5);
 
    print4(5);
      print5(5);
 
 
  }
