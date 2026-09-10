class Solution {
public:
    int floorSqrt(int n)  {
      
      int high = n ; 
      int low = 1 ;
      int ans =1; 
      if(n==0 || n ==1) return n ;
      while(low<=high){
        long long mid = (low+high)/2 ; 
        if(mid*mid == n){
            return mid; 
        }
         if(mid *mid<=n){
            low = mid+1 ; 
            ans = mid;
           
         }else{
             high = mid-1 ; 
         }
      }
      return ans;
    }
};