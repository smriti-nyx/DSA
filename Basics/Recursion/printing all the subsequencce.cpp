#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void seq(int i , vector<int> &v , int arr[] , int n  ){
    if( i == n ){
        for(auto it :v){
            cout<<it<<" ";
        }
        cout<<"\n";
        return ; 
    }
    v.push_back(arr[i]) ;
    seq(i+1 ,v , arr , n ) ;
    v.pop_back() ; 
    seq(i +1 , v , arr , n) ;
    
}
 
int main(){
     ios::sync_with_stdio(false);
    cin.tie(nullptr);
  int arr[] = {3 ,1, 2} ;
    int n =3 ; 
    vector<int> v; 
    seq( 0 ,v , arr , n);
    return 0 ; 
 
 
  }
