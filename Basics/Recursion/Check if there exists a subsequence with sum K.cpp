class Solution{
    public:
    bool checkSubsequenceSum(vector<int>& nums, int k) {
         if( k == 0) return true ;
         if( k< 0 || nums.empty()) return  false ;

         int last = nums.back();
         nums.pop_back() ; 
         if(last == k ){
            return true ; 
         }
           if(checkSubsequenceSum( nums , k- last ) == true ){
            return true ;
           } 
         
         if(checkSubsequenceSum(nums , k) == true){
            return true ;
         } 
         nums.push_back(last) ;

         return false ; 



    }
};