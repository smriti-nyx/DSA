class Solution {
public:
  int NthRoot(int N, int M) {
       int high = M ; 
       int low = 1 ;
       int ans =1 ;
       if(M ==1) return M ; 

       while(low<=high){
        long mid = (low+high)/2 ;
        if(pow(mid ,N)==M){
            return mid;
        }
        if(pow(mid , N)<= M){
            low = mid+1 ; 
            ans = mid;
        }else{
            high = mid -1 ;
        }
       }
       return -1 ; 
    }
};
