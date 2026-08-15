class Solution{
   
    public:    	
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
        //base case
        if(k == 0) return 1 ; //one subsequence found 
        if(nums.empty() || k <0) return 0 ;

        int last = nums.back();
        nums.pop_back() ; 
        int include = countSubsequenceWithTargetSum(nums , k - last) ; //take in the element as a contributor in subsq formation 

       
        int exclude = countSubsequenceWithTargetSum(nums , k) ; // dont take 
        nums.push_back(last) ;
    	
      return include + exclude ; 
        
    }
};